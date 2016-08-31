grid = []
for i in range(20):
	l = input().strip().split(' ')
	l = list(map(lambda x :int(x), l))
	grid.append(l)
maxp = 0

for i in range(20):
	for j in range(17):
		pd = grid[i][j] * grid[i][j + 1] * grid[i][j + 2] * grid[i][j + 3]
		if pd > maxp:
			maxp = pd
		pd = grid[j][i] * grid[j + 1][i] * grid[j + 2][i] * grid[j + 3][i]
		if pd > maxp:
			maxp = pd
		if i + 3 < 20:
			pd = grid[i][j] * grid[i + 1][j + 1] * grid[i + 2][j + 2] * grid[i + 3][j + 3]
			if pd > maxp:
				maxp = pd
		if i > 2:
			pd = grid[i][j] * grid[i - 1][j + 1] * grid[i - 2][j + 2] * grid[i - 3][j + 3]
			if pd > maxp:
				maxp = pd

print(maxp)

