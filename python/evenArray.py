# for _ in range(int(input())):
# 	n = int(input())
# 	array = list(map(int, input().strip().split()))
# 	odd, even = 0, 0
# 	for ind, a in enumerate(array):
# 		if ind % 2 != a % 2:
# 			if a % 2 == 0:
# 				even += 1
# 			else:
# 				odd += 1
# 	print(odd if odd == even else -1)

for _ in range(int(input())):
	n = int(input())
	array = list(map(int, input().strip().split()))
	validity = [1 if (ind % 2 == x % 2)
				else 0
				for ind, x in enumerate(array)]	
	invalid = validity.count(0)
	print(invalid // 2 if invalid % 2 == 0 else -1)k