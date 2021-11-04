#![allow(non_snake_case, dead_code, unused_imports, unused_macros)]

use rand::prelude::*;
use std::{collections::BTreeSet, io::prelude::*};
use proconio::{input, marker::*};
use svg::node::element::{Line, Path, Rectangle, path::Data};

pub trait SetMinMax {
	fn setmin(&mut self, v: Self) -> bool;
	fn setmax(&mut self, v: Self) -> bool;
}
impl<T> SetMinMax for T where T: PartialOrd {
	fn setmin(&mut self, v: T) -> bool {
		*self > v && { *self = v; true }
	}
	fn setmax(&mut self, v: T) -> bool {
		*self < v && { *self = v; true }
	}
}

#[macro_export]
macro_rules! mat {
	($($e:expr),*) => { Vec::from(vec![$($e),*]) };
	($($e:expr,)*) => { Vec::from(vec![$($e),*]) };
	($e:expr; $d:expr) => { Vec::from(vec![$e; $d]) };
	($e:expr; $d:expr $(; $ds:expr)+) => { Vec::from(vec![mat![$e $(; $ds)*]; $d]) };
}

pub const MAX_D: i32 = 2000;

type Output = (Vec<Vec<(usize, usize)>>, Vec<VisData>);

pub struct VisData {
	day: usize,
	i: usize,
	s: Vec<f64>,
}

pub struct Input {
	pub N: usize,
	pub M: usize,
	pub K: usize,
	pub R: usize,
	pub d: Vec<Vec<i32>>,
	pub uv: Vec<(usize, usize)>,
	pub s: Vec<Vec<i32>>,
	pub t: Vec<Vec<i32>>,
}

impl std::fmt::Display for Input {
	fn fmt(&self, f: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
		writeln!(f, "{} {} {} {}", self.N, self.M, self.K, self.R)?;
		for i in 0..self.N {
			for j in 0..self.K {
				if j > 0 {
					write!(f, " ")?;
				}
				write!(f, "{}", self.d[i][j])?;
			}
			writeln!(f)?;
		}
		for i in 0..self.R {
			writeln!(f, "{} {}", self.uv[i].0 + 1, self.uv[i].1 + 1)?;
		}
		for i in 0..self.M {
			for j in 0..self.K {
				if j > 0 {
					write!(f, " ")?;
				}
				write!(f, "{}", self.s[i][j])?;
			}
			writeln!(f)?;
		}
		for i in 0..self.N {
			for j in 0..self.M {
				if j > 0 {
					write!(f, " ")?;
				}
				write!(f, "{}", self.t[i][j])?;
			}
			writeln!(f)?;
		}
		Ok(())
	}
}

pub fn parse_input(f: &str) -> Input {
	let f = proconio::source::once::OnceSource::from(f);
	input! {
		from f,
		N: usize, M: usize, K: usize, R: usize,
		d: [[i32; K]; N],
		uv: [(Usize1, Usize1); R],
		s: [[i32; K]; M],
		t: [[i32; M]; N]
	}
	Input {
		N,
		M,
		K,
		R,
		d,
		uv,
		s,
		t
	}
}

pub fn parse_output(input: &Input, f: &str) -> Output {
	use proconio::source::Source;
	let mut out = vec![];
	let mut data = vec![];
	for line in f.lines() {
		if line.starts_with("#") {
			let line = line[1..].trim();
			if line.starts_with("s ") {
				let line = line[1..].trim();
				input! {
					from proconio::source::once::OnceSource::from(line),
					i: Usize1,
					s: [f64; input.K],
				}
				data.push(VisData { day: out.len(), i, s });
			}
		} else {
			input! {
				from proconio::source::once::OnceSource::from(line),
				a: [(Usize1, Usize1)]
			}
			out.push(a);
		}
	}
	(out, data)
}

pub fn compute_score_detail(input: &Input, out: &Output) -> (i64, String) {
	let out = &out.0;
	let mut depend = vec![vec![]; input.N];
	for &(u, v) in &input.uv {
		depend[v].push(u);
	}
	let mut worker = vec![!0; input.N];
	let mut working = vec![(!0, !0); input.M];
	let mut done = vec![false; input.N];
	let mut n = 0;
	for d in 0.. {
		if d > 0 {
			let mut f = vec![];
			for i in 0..input.M {
				if working[i].1 == d {
					f.push(i);
					done[working[i].0] = true;
					working[i] = (!0, !0);
					n += 1;
				}
			}
			if n == input.N || d == MAX_D {
				let score = if n == input.N {
					n as i64 + (MAX_D - d) as i64
				} else {
					n as i64
				};
				return (score, String::new());
			}
		}
		if d as usize >= out.len() {
			return (0, "Illegal output".to_owned());
		}
		for &(a, b) in &out[d as usize] {
			if a >= input.M || b >= input.N {
				return (0, "Illegal output".to_owned());
			}
			if worker[b] != !0 {
				return (0, format!("Task {} has been assigned multiple times", b + 1));
			} else if working[a].0 != !0 {
				return (0, format!("Member {} is still working", a + 1));
			} else if depend[b].iter().any(|&u| !done[u]) {
				return (0, format!("Dependent tasks of task {} have not been completed", b + 1));
			}
			worker[b] = a;
			working[a] = (b, d + input.t[b][a]);
		}
	}	
	(0, String::new())
}

pub fn gen(seed: u64) -> Input {
	let mut rng = rand_chacha::ChaCha20Rng::seed_from_u64(seed);
	let N = 1000;
	let M = 20;
	let K = rng.gen_range(10, 21) as usize;
	let R = rng.gen_range(1000, 3001) as usize;
	let mut d = mat![0; N; K];
	let mut s = mat![0; M; K];
	for i in 0..N {
		let mut b = vec![0.0; K];
		for j in 0..K {
			b[j] = f64::abs(rng.sample(rand_distr::StandardNormal));
		}
		let mul = rng.gen_range(10.0, 40.0) / b.iter().map(|x| x * x).sum::<f64>().sqrt();
		for j in 0..K {
			d[i][j] = (b[j] * mul).round() as i32;
		}
	}
	for i in 0..M {
		let mut b = vec![0.0; K];
		for j in 0..K {
			b[j] = f64::abs(rng.sample(rand_distr::StandardNormal));
		}
		let mul = rng.gen_range(20.0, 60.0) / b.iter().map(|x| x * x).sum::<f64>().sqrt();
		for j in 0..K {
			s[i][j] = (b[j] * mul).round() as i32;
		}
	}
	let mut uv = BTreeSet::new();
	while uv.len() < R {
		let p = rng.gen_range(1, 101) as usize;
		let v = rng.gen_range(p as i32, N as i32) as usize;
		let u = v - p;
		uv.insert((u, v));
	}
	let mut t = mat![0; N; M];
	for i in 0..N {
		let r = rng.gen_range(-3, 4);
		for j in 0..M {
			let w = d[i].iter().zip(s[j].iter()).map(|(d, s)| (d - s).max(0)).sum::<i32>();
			if w == 0 {
				t[i][j] = 1;
			} else {
				t[i][j] = 1.max(w + r);
			}
		}
	}
	Input {
		N,
		M,
		K,
		R,
		d,
		uv: uv.into_iter().collect(),
		s,
		t
	}
}

pub fn get_colors(input: &Input, out: &Output, ty: i32) -> Vec<String> {
	if ty == 0 {
		(0..input.N).map(|i|
			color(((input.d[i].iter().map(|&x| x * x).sum::<i32>() as f64).sqrt() - 10.0) / 30.0)
		).collect()
	} else if ty == 1 {
		(0..input.N).map(|i| color(i as f64 / input.N as f64)).collect()
	} else if ty == 2 {
		let mut diff = vec![0.0f64; input.N];
		let mut s = mat![0.0; input.M; input.K];
		let mut p = 0;
		for d in 0..out.0.len() {
			while p < out.1.len() && out.1[p].day <= d {
				s[out.1[p].i] = out.1[p].s.clone();
				p += 1;
			}
			for &(a, b) in &out.0[d] {
				let w = input.d[b].iter().zip(s[a].iter()).map(|(d, s)| (*d as f64 - s).max(0.0)).sum::<f64>();
				let t = w.max(1.0);
				diff[b] = input.t[b][a] as f64 - t;
			}
		}
		(0..input.N).map(|i| color((diff[i] + 20.0).max(0.0).min(40.0) / 40.0)).collect()
	} else {
		vec!["gray".to_owned(); input.N]
	}
}

/// 0 <= val <= 1
fn color(val: f64) -> String {
	let x = val * 2.0 - 1.0;
	let f = |d| (255.0 / (1.0 + f64::exp(-15.0 * (x + d)))).round() as i32;
	let r = f(-0.2) * 5 / 6;
	let g = (f(0.6) - f(-0.6)) * 2 / 3;
	let b = (255 - f(0.2)) * 11 / 12;
	format!("#{:02x}{:02x}{:02x}", r, g, b)
}

fn rect(x: usize, y: usize, w: usize, h: usize, fill: &str) -> Rectangle {
	Rectangle::new().set("x", x).set("y", y).set("width", w).set("height", h).set("fill", fill)
}

pub fn vis_default(input: &Input, out: &Output) -> (i64, String, String) {
	vis(input, out, out.0.len(), 0)
}

pub fn vis(input: &Input, out: &Output, d: usize, ty: i32) -> (i64, String, String) {
	let W = 50;
	let (score, err) = compute_score_detail(input, out);
	let colors = get_colors(input, out, ty);
	let visdata = &out.1;
	let out = &out.0;
	let T = (0..out.len()).map(|d| out[d].iter().map(|&(a, b)| d as i32 + input.t[b][a]).max().unwrap_or(0)).max().unwrap_or(1);
	let mut doc = svg::Document::new().set("viewBox", (0, 0, W * input.M, T + 20 + W as i32));
	doc = doc.add(rect(0, 0, 50 * input.M, T as usize + 20 + W, "white"));
	let mut s = vec![vec![0.0; input.K]; input.M];
	for data in visdata {
		if data.day <= d {
			s[data.i] = data.s.clone();
		}
	}
	let S = *input.s.iter().map(|s| s.iter().max().unwrap()).max().unwrap();
	for i in 0..input.M {
		let mut data = Data::new();
		for j in 0..input.K {
			let v = input.s[i][j] as f64 / S as f64 * W as f64 / 2.0;
			let r = 2.0 * std::f64::consts::PI * j as f64 / input.K as f64;
			let x = (i * W + W / 2) as f64 + r.sin() * v;
			let y = (W / 2) as f64 + r.cos() * v;
			if j == 0 {
				data = data.move_to((x, y));
			} else {
				data = data.line_to((x, y));
			}
		}
		doc = doc.add(Path::new().set("fill", "pink").set("d", data));
		let mut data = Data::new();
		for j in 0..input.K {
			let v = s[i][j] as f64 / 40.0 * W as f64 / 2.0;
			let r = 2.0 * std::f64::consts::PI * j as f64 / input.K as f64;
			let x = (i * W + W / 2) as f64 + r.sin() * v;
			let y = (W / 2) as f64 + r.cos() * v;
			if j == 0 {
				data = data.move_to((x, y));
			} else {
				data = data.line_to((x, y));
			}
		}
		data = data.close();
		doc = doc.add(Path::new().set("fill", "none").set("stroke", "blue").set("stroke-width", 1).set("d", data));
	}
	for d in 0..out.len().min(d) {
		for &(a, b) in &out[d] {
			doc = doc.add(rect(a * W, 20 + W + d, W, input.t[b][a] as usize, &colors[b]).set("stroke", "black").set("stroke-width", 1));
		}
	}
	(score, doc.to_string(), err)
}
