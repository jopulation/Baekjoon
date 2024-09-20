# 바구니 뒤집기

def swap(arr, a, b):
    tmp = arr[a]
    arr[a] = arr[b]
    arr[b] = tmp

N, M = map(int, input().split())
basket = list(range(N+1))

for a in range(M):
    i, j = map(int, input().split())
    for b in range(int((j-i+1)/2)):
        swap(basket, i+b, j-b)

print(*basket[1:])
