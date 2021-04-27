a, b = input().strip().lower(), input().strip().lower()

if len(a) in range(1, 101) and len(b) in range(1, 101):
    if a == b:
        print(0)
    elif a > b:
        print(1)
    else:
        print(-1)