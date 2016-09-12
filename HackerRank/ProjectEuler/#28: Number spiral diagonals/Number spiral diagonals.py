T = int(input())
for i in range(T):
	n = int(input())
	n = (n - 1) // 2
	ans = ((16 * n ** 3 + 30 * n * n + 26 * n) // 3 + 1) % 1000000007
	print(ans)

