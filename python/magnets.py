n = int(input())
pieces = []
for _ in range(n):
    pieces.append(input().strip())


groups, curr = 1, pieces[0]

for p in pieces[1: ]:
    if p != curr:
        groups += 1
    curr = p

print(groups)