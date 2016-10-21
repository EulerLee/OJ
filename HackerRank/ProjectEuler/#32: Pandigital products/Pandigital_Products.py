from itertools import permutations

def pow(x, n):
	if n == 0:
		return 1
	while (n & 1) == 0:
		x = x * x
		n = n >> 1
	ans = x
	x = x * x
	n = n >> 1
	while n:
		if (n & 1) == 1:
			ans = ans * x
		x = x * x
		n = n >> 1
	return ans

def get(a):
	n = a
	s = ''
	for i in range(1, 10):
		if (n & 1) == 1:
			s = s + str(i)
		n = n >> 1
	return s

def getc(c, N):
	n = c
	s = ''
	for i in range(1, N + 1):
		if (n & 1) == 0:
			s = s + str(i)
		n = n >> 1
	return s

def fun(la):
	l = []
	for x in la:
		s = ''
		for y in x:
			s = s + str(y)
		s = int(s)
		l.append(s)
	return l

N = int(input())
n = pow(2, N)
ans = 0
g = set()
for a in range(1, n):
	sa = get(a)
	if len(sa) >= N / 2:
		continue
	for b in range(1, n):
		sb = get(b)
		if (a & b) != 0:
			continue
		if len(sb) >= N / 2:
			continue
		sc = getc(a | b, N)
		if len(sc) >= N // 2:
			la = permutations(sa, len(sa))
			lb = permutations(sb, len(sb))
			lc = permutations(sc, len(sc))
			la = list(la)
			lb = list(lb)
			lc = list(lc)
			la = fun(la)
			lb = fun(lb)
			lc = fun(lc)
			for x in la:
				for y in lb:
					for z in lc:
						#print(x, "\t", y, "\t", z)
						if z == x * y:
							if z not in g:
								#print(x, "\t", y, "\t", z)
								g.add(z)
								ans = ans + z
print(ans)

