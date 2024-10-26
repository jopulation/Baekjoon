# 알고리즘 수업 - 알고리즘의 수행 시간 3

def ManOfPassion(A, n, cnt):
    sum = 0
    for i in range(1, n+1):
        for j in range(i, n+1):
            sum += A[i] # 코드1
    return sum

n = int(input())

print(n**2)
print(2) # O(n^2)
