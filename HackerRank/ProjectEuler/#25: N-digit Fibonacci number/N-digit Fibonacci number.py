T = int(input())
a1 = 1
a2 = 1
al = [1, 1]
n = 3
while len(al) < 5002:
	a3 = a1 + a2
	a1 = a2
	a2 = a3
	if len(str(a3)) >= len(al):
		al.append(n)
	n = n + 1
for i in range(T):
	N = int(input())
	print(al[N])

