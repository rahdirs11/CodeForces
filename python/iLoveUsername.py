'''
Vasya adores sport programming. He can't write programs but he loves to watch the contests' progress. Vasya even has a favorite coder and Vasya pays special attention to him.
One day Vasya decided to collect the results of all contests where his favorite coder participated 
and track the progress of his coolness. For each contest where this coder participated, he wrote 
out a single non-negative number — the number of points his favorite coder earned in the contest. 
Vasya wrote out the points for the contest in the order, in which the contests run (naturally, 
no two contests ran simultaneously).

Vasya considers a coder's performance in a contest amazing in two situations: he can break either 
his best or his worst performance record. First, it is amazing if during the contest the coder earns 
strictly more points that he earned on each past contest. Second, it is amazing if during the contest
the coder earns strictly less points that he earned on each past contest. A coder's first contest 
isn't considered amazing. Now he wants to count the number of amazing performances the coder had 
throughout his whole history of participating in contests. But the list of earned points turned out 
long and Vasya can't code... That's why he asks you to help him.
'''
def amazingPerformancesCount(arr: list):
    best, worst = -1, -1
    count = int()
    i = 1
    while i < len(arr) and arr[i] == arr[0]:
        i += 1
    
    while i < len(arr):
        if best == -1:
            count += 1
            if arr[i] < arr[0]:
                best, worst = arr[0], arr[i]
            else:
                best, worst = arr[i], arr[0]
        elif arr[i] > best:
            best = arr[i]
            count += 1
        elif arr[i] < worst:
            worst = arr[i]
            count += 1
        i += 1
        # print(f'Best score:\t{best}', f'Worst score:\t{worst}', sep=' || ')
    return count

n = int(input())
arr = list(map(int, input().split()))

print(amazingPerformancesCount(arr))
