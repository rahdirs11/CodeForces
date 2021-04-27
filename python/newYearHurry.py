n, k = map(int, input().strip().split())
output = False
time = [(5 * i) for i in range(1, n+1)]
# print(time)
timeLeft = 240 - k
if timeLeft == 0:
	print(0)
else:
# print("Time Left :", timeLeft)
	for i in range(n-1, -1, -1):
		timeTaken = sum(time[0: i + 1])
		# print(f"Time taken : {timeTaken}")
		if timeTaken <= timeLeft:
			output = True
			print(i + 1)
			break
	if not output:
		print(0)
