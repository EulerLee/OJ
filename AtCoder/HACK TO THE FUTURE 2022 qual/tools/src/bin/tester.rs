use std::process::Stdio;
use std::io::prelude::*;
use tools::*;

fn exec(command: &str, args: &Vec<String>) {
	let mut input = String::new();
	std::io::stdin().read_to_string(&mut input).unwrap();
	let input = parse_input(&input);
	let mut p = std::process::Command::new(command)
		.args(args)
		.stdin(Stdio::piped())
		.stdout(Stdio::piped())
		.spawn().unwrap_or_else(|e| { eprintln!("failed to execute the command"); eprintln!("{}", e); std::process::exit(1) } );
	let mut stdin = std::io::BufWriter::new(p.stdin.take().unwrap());
	let mut stdout = std::io::BufReader::new(p.stdout.take().unwrap());
	writeln!(stdin, "{} {} {} {}", input.N, input.M, input.K, input.R).unwrap();
	for i in 0..input.N {
		for j in 0..input.K {
			if j > 0 {
				write!(stdin, " ").unwrap();
			}
			write!(stdin, "{}", input.d[i][j]).unwrap();
		}
		writeln!(stdin).unwrap();
	}
	for i in 0..input.R {
		writeln!(stdin, "{} {}", input.uv[i].0 + 1, input.uv[i].1 + 1).unwrap();
	}
	stdin.flush().unwrap();
	let mut depend = vec![vec![]; input.N];
	for &(u, v) in &input.uv {
		depend[v].push(u);
	}
	let mut worker = vec![!0; input.N];
	let mut working = vec![(!0, !0); input.M];
	let mut done = vec![false; input.N];
	let mut n = 0;
	for d in 1.. {
		let err = || -> ! {
			eprintln!("Your program has terminated unexpectedly on day {}", d);
			eprintln!("Score = 0");
			std::process::exit(1)
		};
		loop {
			let mut out = String::new();
			stdout.read_line(&mut out).unwrap_or_else(|_| err());
			print!("{}", out);
			if out.starts_with("#") {
				continue;
			}
			let err2 = || {
				eprintln!("Illegal output format on day {}", d);
				eprintln!("Score = 0");
				std::process::exit(1)
			};
			let ss = out.split_whitespace().collect::<Vec<_>>();
			if ss.len() == 0 {
				eprintln!("Illegal output format on day {}", d);
				eprintln!("Score = 0");
				std::process::exit(1)
			}
			if let Ok(m) = ss[0].parse::<usize>() {
				if m * 2 != ss.len() - 1 {
					err2();
				}
				for i in 0..m {
					if let (Ok(a), Ok(b)) = (ss[1 + i * 2].parse::<usize>(), ss[2 + i * 2].parse::<usize>()) {
						if !(1 <= a && a <= input.M) || !(1 <= b && b <= input.N) {
							err2();
						}
						let a = a - 1;
						let b = b - 1;
						if worker[b] != !0 {
							eprintln!("Task {} has been assigned multiple times", b + 1);
							eprintln!("Score = 0");
							std::process::exit(1)
						} else if working[a].0 != !0 {
							eprintln!("Member {} is still working", a + 1);
							eprintln!("Score = 0");
							std::process::exit(1)
						} else if depend[b].iter().any(|&u| !done[u]) {
							eprintln!("Dependent tasks of task {} have not been completed", b + 1);
							eprintln!("Score = 0");
							std::process::exit(1)
						}
						worker[b] = a;
						working[a] = (b, d + input.t[b][a] - 1);
					} else {
						err2();
					}
				}
			} else {
				err2();
			}
			break;
		}
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
			writeln!(stdin, "-1").unwrap_or_else(|_| err());
			stdin.flush().unwrap_or_else(|_| err());
			p.wait().unwrap();
			let score = if n == input.N {
				input.N as i64 + (MAX_D - d) as i64
			} else {
				n as i64
			};
			eprintln!("Score = {}", score);
			return;
		}
		write!(stdin, "{}", f.len()).unwrap_or_else(|_| err());
		for i in f {
			write!(stdin, " {}", i + 1).unwrap_or_else(|_| err());
		}
		writeln!(stdin).unwrap_or_else(|_| err());
		stdin.flush().unwrap_or_else(|_| err());
	}
}

fn main() {
	if std::env::args().len() < 2 {
		eprintln!("Usage: {} <command> [<args>...]", std::env::args().nth(0).unwrap());
		return;
	}
	let command = std::env::args().nth(1).unwrap();
	let args = std::env::args().skip(2).collect::<Vec<_>>();
	exec(&command, &args);
}
