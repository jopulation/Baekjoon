# 공넣기

N, M = map(int, input().split())
basket = [0]*N

for i in range(M):
    i, j, k = map(int, input().split())
    arr = [k]*(j-i+1)
    basket[i-1:j] = arr

for i in range(N):
    print(basket[i], "", end="")
