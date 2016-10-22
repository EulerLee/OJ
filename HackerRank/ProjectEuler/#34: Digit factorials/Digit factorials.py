l = [1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880]
N = int(input())
ans = 0
for n in range(10, N + 1):
    m = 0
    s = str(n)
    for x in s:
        m = m + l[int(x)]
    if m % n == 0:
        ans = ans + n
print(ans)


