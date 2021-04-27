two, three, five, six = map(int, input().strip().split())
maxSum = int()
min256 = min(two, five, six)
maxSum += min256 * 256

two -= min256

maxSum += min(two, three) * 32

print(maxSum)
