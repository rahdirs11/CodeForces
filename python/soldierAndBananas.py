k, n, w = map(int, input().strip().split())
totalCost = int()
for i in range(1, w + 1):
	totalCost += k * i

print(0 if totalCost <= n else totalCost - n)