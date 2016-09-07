from math import sqrt

T = int(input())

def sd(n):
	divisors = set([1])
	for i in range(2, int(sqrt(n)) + 1):
		if n % i == 0:
			divisors.add(i)
			divisors.add(n // i)
	return sum(divisors)

al = []
for i in range(12, 28123):
	if sd(i) > i:
		al.append(i)
pl = list(False for i in range(500001))
for x in al:
	for y in al:
		if x + y > 28123:
			break
		else:
			pl[x + y] = True

for i in range(T):
	N = int(input());
	if(N > 28123):
		print('YES')
		continue
	if pl[N]:
		print('YES')
	else:
		print('NO')

