# 분해합
# 브론즈2

n = int(input()) # N(1 ≤ N ≤ 1,000,000)

for i in range(n):
    s = str(i)
    if i + sum(map(int, s)) == n:
        print(i)
        exit(0)  # 찾으면 해당 숫자 출력하고 종료
print(0)  # 만약 찾지 못하면 0 출력