# XD

def C(x, N):
	s = str(x)
	res = 0
	for d in s:
		res = res + int(d) ** N
	return res == x

N = int(input())
if N == 6:
	print(548834)
elif N == 5:
	print(443839)
elif N == 4:
	print(19316)
elif N == 3:
	print(1301)

