# 알고리즘 수업 - 점근적 표기 1

a1, a0 = map(int, input().split()) # 0 ≤ |ai| ≤ 100, Int
c = int(input()) # 1 ≤ c ≤ 100, Int
n0 = int(input()) # 1 ≤ n0 ≤ 100, Int

if c >= a1: # 정수이기 때문에 분수는 나오지 않는다.
    if (c-a1)*n0 >= a0:
        print(1)
    else:
        print(0)
else:
    print(0)
