string = input().strip()
lowerCase = upperCase = 0
for s in string:
    if s.islower():     lowerCase += 1
    elif s.isupper():   upperCase += 1

print(string.upper() if upperCase > lowerCase else string.lower())
