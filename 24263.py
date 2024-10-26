# 알고리즘 수업 - 알고리즘의 수행 시간 2

def ManOfPassion(A, n):
    sum = 0
    for i in range(1, n+1):
        sum += A[i] # 코드1
    return sum

n = input()

print(n)
print(1) # O(n)
