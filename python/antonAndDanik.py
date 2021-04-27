n = int(input())
s = input()

print('Anton' if s.count('A') > s.count('D') else ('Friendship' if s.count('D') ==
        s.count('A') else 'Danik'))
