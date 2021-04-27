# After t seconds, no girl should be behind a guy

n, t = map(int, input().strip().split())
queue = input()
newQueue = list(queue)
while t != 0:
    count = queue.count('BG')
    if count == 0:  break
    index = queue.index('BG')
    while count != 0:
        newQueue[index], newQueue[index + 1] = newQueue[index + 1], newQueue[index]
        queue = ''.join(newQueue)
        if queue[index+2: ].find('BG') == -1:  break
        index = queue[index+2: ].index('BG') + 2
        count -= 1
    print(f'At {t}, queue is {queue}')
    t -= 1

print(queue)
