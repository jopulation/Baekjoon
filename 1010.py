# 다리 놓기
# 실버5

for i in range(int(input())):
    ans = 1
    k, n = map(int, input().split())
    for i in range(n, n - k, -1):
        ans *= i 
    for i in range(1, k + 1):
        ans //= i
    print(ans)