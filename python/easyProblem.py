n = int(input())
problems = [int(x) for x in input().split()]

print('HARD' if any(problems) else 'EASY')