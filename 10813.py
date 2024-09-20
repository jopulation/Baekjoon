# 공 바꾸기

N, M = map(int, input().split())
basket = list(range(N+1))

for a in range(M):
    i, j = map(int, input().split())
    basket[i], basket[j] = basket[j], basket[i]

print(*basket[1:])
