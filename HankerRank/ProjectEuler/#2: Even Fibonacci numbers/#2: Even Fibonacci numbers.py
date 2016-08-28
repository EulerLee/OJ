from math import sqrt

def fnn(n):
    ans = (((1 + sqrt(5)) / 2)**(n+1) - ((1 - sqrt(5)) / 2)**(n+1)) / sqrt(5)
    return int(ans)

t = int(input())
for i in range(t):
    n = int(input())
    l = []
    for k in range(1, n):
        temp = fnn(k)
        if temp > n:
            break
        else:
            if k%3 == 2:
                l.append(temp)
    res = sum(l)
    print(res)
