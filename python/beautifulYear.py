y = int(input())
y += 1
while True:
    if len(set(str(y))) == 4:
        print(y)
        break
    y += 1

