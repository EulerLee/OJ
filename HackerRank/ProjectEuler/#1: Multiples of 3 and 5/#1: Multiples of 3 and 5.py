#coding = utf-8

T = int(input())
for i in range(T):
	n = int(input())
	n3 = n//3
	n5 = n//5
	n15 = n//15
	if n%3 == 0:
		n3 -= 1
	if n%5 == 0:
		n5 -= 1
	if n%15 == 0:
		n15 -= 1
	res = (1 + n3) * n3 * 3 / 2 + (1 + n5) * n5 *5 / 2 - (1 + n15) * n15 *15 / 2
	print(int(res))
