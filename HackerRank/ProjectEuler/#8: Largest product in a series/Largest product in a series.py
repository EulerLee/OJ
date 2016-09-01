T = int(input())
for k in range(T):
	n, k = input().strip().split(' ')
	n, k = (int(n), int(k))
	num = input()
	num = str(num)
	maxs = 0
	for i in range(n - k):
		temp = 1
		for j in range(i, k + i):
			temp = temp * int(num[j])
		if temp > maxs:
			maxs = temp
	print(maxs)
