n, orangeJuice = int(input()), 0
percentage = list(map(int, input().strip().split()))


for p in percentage:
	if p == 0:	continue
	orangeJuice += p / 100

# print(round(orangeJuice / n * 100, 12))

print(f"{orangeJuice * 100 / n:0.12f}")