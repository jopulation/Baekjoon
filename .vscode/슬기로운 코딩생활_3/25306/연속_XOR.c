def XOR(n):
    mod = n % 4
    if (mod == 0):
        return n
    elif (mod == 1):
        return 1
    elif (mod == 2):
        return n + 1
    elif (mod == 3):
        return 0

A, B = input().split()
A = int(A)
B = int(B)

total = XOR(A-1)^XOR(B)
print(total)