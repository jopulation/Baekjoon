# 대지

n = int(input())

arrX = []
arrY = []

for i in range(n):
    x, y = map(int, input().split())
    arrX.append(x)
    arrY.append(y)

print((max(arrX) - min(arrX)) * (max(arrY) - min(arrY)))
