from math import sqrt

T = int(input())

def sd(n):
    divisors = set([1])
    for i in range(2, int(sqrt(n)) + 1):
        if n % i == 0:
            divisors.add(i)
            divisors.add(n // i)
    return sum(divisors)

al = []
for n in range(1, 100001):
    if sd(sd(n)) == n and sd(n) != n:
        al.append(n)
al = sorted(al)
for i in range(T):
    n = int(input())
    ans = 0
    for x in al:
        if x < n:
            ans = ans + x
    print(ans)

