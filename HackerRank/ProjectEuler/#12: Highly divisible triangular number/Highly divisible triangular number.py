def divisorn(res):
	pl = [2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97]
	al = {}
	for x in pl:
		al[x] = 0
	for x in pl:
		while res % x == 0:
			res = res // x
			al[x] = al[x] + 1
	ans = 1
	for x in al:
		ans = ans * (al[x] + 1)
	return ans

T = int(input())

al = {}
res = 0
i = 1
n = 1
for k in range(T):
	N = int(input())
	if N in al:
		print(al[N])
		continue
	while True:
		if n > N:
			print(al[N])
			break
		res = res + i
		if divisorn(res) > n:
			if n not in al:
				al[n] = res
				n = n + 1
				res = res - i
				continue
		i = i + 1

