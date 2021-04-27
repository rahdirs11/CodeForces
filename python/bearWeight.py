a, b = map(int, input().strip().split())

years = 0
while a <= b:
	years += 1
	a, b = a * 3, b * 2

print(years)