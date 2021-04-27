def possible(n: int) -> str:
    from math import ceil
    i = ceil(n ** (1 / 3))
    j = 1
    while i >= j:
        value = j ** 3 + i ** 3
        if value == n:
            if i == j == value:
                continue
            else:
                return 'YES'
        elif value < n:
            j += 1
        else:
            i -= 1
    return 'NO'


for _ in range(int(input())):
    n = int(input())
    print(possible(n))
