string = sorted(input().strip().split('+'))
for ind, s in enumerate(string):
	print(f'{s}+' if ind != len(string) - 1 else s, end="")
