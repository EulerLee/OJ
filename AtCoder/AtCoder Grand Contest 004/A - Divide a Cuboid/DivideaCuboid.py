l = input().strip().split(' ')
l = list(map(lambda x: int(x), l))
if (l[0] * l[1] * l[2]) % 2 == 0:
	print(0)
else:
	print(min(l[0] * l[1], l[1] * l[2], l[2] * l[0]))

