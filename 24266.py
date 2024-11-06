# 알고리즘 수업 - 알고리즘의 수행 시간 5

def ManOfPassion(n):
    cnt = 0
    for i in range(1, n+1):
        for j in range(1, n+1):
            for k in range(1, n+1):
                cnt += 1
    return cnt

n = int(input())

print(n**3)
print(3) # O(n^3)
