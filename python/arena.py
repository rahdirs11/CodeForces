for _ in range(int(input())):
    # print('=' * 20)
    n = int(input())
    levels = [int(x) for x in input().split()]
    leastLevel = min(levels)
    leastLevelCount = levels.count(leastLevel)
    if leastLevelCount == n:
        print(0)
    else:
        print(n - leastLevelCount)
    # print('=' * 20)
