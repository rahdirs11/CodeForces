# this is basically to perform capitalize operation where
# you have to make just the first letter upper-case

word = input().lstrip()

try:
	print(word if word[0].isupper() else word[0].upper() + word[1: ])
except:
	pass

