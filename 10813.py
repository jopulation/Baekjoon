# 공 바꾸기

def swap(arr, a, b):
    tmp = arr[a-1]
    arr[a-1] = arr[b-1]
    arr[b-1] = tmp


N, M = map(int, input().split())
basket = [0]*N

for i in range(N):
    basket[i] = i+1

for a in range(M):
    i, j = map(int, input().split())
    swap(basket, i, j)

print(*basket)
