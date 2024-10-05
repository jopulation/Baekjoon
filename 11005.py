# 진법 변환 2

def bFormation2(n, b):
    FORMA = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    num = []
    while (n >= b):
        num.append(FORMA[n%b])
        n = n//b
    num.append(FORMA[n])
        
    print(*num[::-1], sep="")

n, b = map(int, input().split())
bFormation2(n, b)
