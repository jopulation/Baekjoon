# 알고리즘 수업 - 알고리즘의 수행 시간 6

def ManOfPassion(n):
    cnt = 0
    for i in range(1, n-1):
        for j in range(i+1, n):
            for k in range(j+1, n+1):
                cnt += 1
    return cnt

n = int(input())

# print(ManOfPassion(n))
print(int(n*(n-1)*(n-2)/6))
print(3) # O(n^3)
