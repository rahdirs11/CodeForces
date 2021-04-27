from itertools import groupby

n = int(input().strip())
stones = input()

removal = int()

for key, seq in groupby(stones):
    rep = list(seq)
    if len(rep) > 1:
        removal += len(rep) - 1

print(removal)
