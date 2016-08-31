pl = [2, 3]
x = 5
while(x < 1000000):
	isprime = True
	for y in pl:
		if x % y == 0:
			isprime = False
			break
	if isprime:
		pl.append(x)
	x = x + 2
print(pl)
suml = []
ans = 0
for x in pl:
	ans = ans + x
	suml.append(ans)
print(suml)
