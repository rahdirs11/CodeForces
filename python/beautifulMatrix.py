# objective is to have index as 2, 2

matrix = [[int(x) for x in input().strip().split()] for _ in range(5)]

row = col = 0

for i, r in enumerate(matrix):
    if 1 in r:
        row, col = i, r.index(1)
        break

print(abs(row - 2) + abs(col - 2))
