n = int(input().strip())
present, nex = 1, -1
notes = [int(x) for x in input().split()]

for i in range(n-1):
	if notes[i] != notes[i+1]:
		print(present, end=' ')
	else:
		print(present, end=' ')	
		present, nex = nex, present


