T = int(input())
sl = [1]
for n in range(1, 1000):
    ans = 1
    for i in range(1, n + 1):
        tmp = i
        while tmp % 10 == 0:
            tmp = tmp // 10
        ans = ans * tmp
    sl.append(ans)
for i in range(T):
    n = int(input())
    res = str(sl[n])
    ans = 0
    for x in res:
        ans = ans + int(x)
    print(ans)

