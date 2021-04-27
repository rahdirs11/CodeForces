'''
For any i and j indices, remove the smallest value if the absolute difference between them
is at most 1. Remove any one element if they are equal
'''

for _ in range(int(input())):
    n = int(input())
    array = sorted([int(x) for x in input().split()])

    while len(array) != 1:
        if abs(array[0] - array[1]) <= 1:
            smallest = min(array[0], array[1])
            array.remove(smallest)
        else:
            break
    else:
        print('YES')
        continue
    print('NO')
    
