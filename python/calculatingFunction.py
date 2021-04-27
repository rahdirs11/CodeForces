def calculateF(n: int):
    return n // 2 if not n % 2 else (n - 1) // 2 - n


print(calculateF(int(input())))