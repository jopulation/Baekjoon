# 알고리즘 수업 - 알고리즘의 수행 시간 4

def ManOfPassion(n):
    cnt = 0
    for i in range(1, n):
        for j in range(i+1, n+1):
            cnt += 1
    return cnt

n = int(input())

print(int(n*(n-1)/2))
print(2) # O(n^2)

# 규칙 찾기
# 1 : 0, 2 : 1, 3 : 3, 4 : 6
# output은 (n-1) + (n-2) + ... + 1
