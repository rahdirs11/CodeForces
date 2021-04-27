'''
Polycarp has guessed three positive integers a, b and c. He keeps these numbers in secret, but he writes down four numbers on a board in arbitrary order — 
their pairwise sums (three numbers) and sum of all three numbers (one number). So, there are four numbers on a board in random order: a + b, a + c, b + c and a + b + c.

You have to guess three numbers a, b and c using given numbers. Print three guessed integers in any order.

Pay attention that some given numbers can be equal.
'''

def restore(arr: list):
    numbers = []
    sumOf3 = max(arr)
    for a in arr:
        if a != sumOf3:
            numbers.append(sumOf3 - a)

    return numbers


if __name__ == '__main__':
    numbers = [int(x) for x in input().split()]
    for num in restore(numbers):
        print(num, end=" ")
    print()