x, y = input().strip().split(' ')
a, b = input().strip().split(' ')
x, y, a, b = (int(x), int(y), int(a), int(b))
k = (a * x + b * y) / (a * a + b * b)
n = (a * y - b * x) / (a * a + b * b)
print(k)
print(n)

