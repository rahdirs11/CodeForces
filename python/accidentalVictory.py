for _ in range(int(input())):
    n = int(input())
    a = [int(x) for x in input().split()]
    player = [[a[i - 1], i] for i in range(1, n + 1)]
    player = sorted(player, key=lambda x: x[0])
    currPlayer = player[-1][0]
    tokenCount = sum(a) - currPlayer
    winners = [player[-1][-1]]

    i = 2

    while i <= n and tokenCount >= currPlayer:
        currPlayer = player[-i][0]
        winners.append(player[-i][-1])
        tokenCount -= currPlayer
        i += 1

    print(len(winners))
    for p in sorted(winners):
        print(p, end=" ")
    print()
