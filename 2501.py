# 약수 구하기

n, k = map(int, input().split())

arr = []

for i in range(1, n+1):
    if n%i == 0:
        arr.append(i)

try:
    print(arr[k-1])

except:
    print(0)
