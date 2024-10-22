# 세탁소 사장 동혁

c = int(input())

arr = [ []*4 for i in range(c) ]

for i in range(c):
    n = int(input())
    
    arr[i].append(n//25)
    n %= 25

    arr[i].append(n//10)
    n %= 10

    arr[i].append(n//5)
    n %= 5

    arr[i].append(n)

for i in range(c):
    print(*arr[i])
