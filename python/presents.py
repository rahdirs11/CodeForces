n = int(input())
p = [int(x) for x in input().split()]


array = [0 for _ in range(n)]

for ind, i in enumerate(p):
    array[i - 1] = ind + 1


print(array)
