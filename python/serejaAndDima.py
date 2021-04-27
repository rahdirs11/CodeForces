n = int(input())
a = [int(x) for x in input().split()]

s, d = 0, 0
turn = 1
while len(a) != 0:
    choice = -1 if a[-1] >= a[0] else 0
    if turn == 1:
        s += a[choice]
        turn = 2
    else:
        d += a[choice]
        turn = 1
    a.pop(choice)

print(s, d)
