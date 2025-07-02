# 이항 계수 1
# 브론즈1

ans = 1
n, k = map(int, input().split())
for i in range(n, n - k, -1):
    ans *= i 
for i in range(1, k + 1):
    ans //= i
print(ans)