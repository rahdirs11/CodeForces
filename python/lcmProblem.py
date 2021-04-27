'''
Let lcm(x, y) be the minimum positive integer that is divisible by both x and y. For example, lcm(13, 37) = 481, lcm(9, 6) = 18

You are given two integers l and r. Find two integers x and y such that l <= x < y <= r and l <= lcm(x, y) <= r.
'''

for _ in range(int(input())):
    l, r = map(int, input().split())
    if 2 * l > r:
        print(-1, -1)
    else:
        print(l, 2 * l)


'''
Suppose we have chosen x and y as the answer, and x is not a divisor of y. Since lcm(x, y) belongs to [l, r], we could have chosen x and lcm(x, y) instead. 
So if the answer exists, there also exists an answer where x is a divisor of y.
If 2l > r, then there is no pair x, y such that l <= x < y <= r and x|y. Otherwise, x = l and y = 2l is the answer.
'''