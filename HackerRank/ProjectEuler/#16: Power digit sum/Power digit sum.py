T = int(input())

for i in range(T):
    N = int(input())
    tmp = 1
    tmp = tmp << N
    tmp = str(tmp)
    ans = 0
    for x in tmp:
        ans = int(x) + ans
    print(ans)

