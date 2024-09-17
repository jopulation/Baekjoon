# 오셀로 재배치

# 1. 임의의 2개의 말을 골라 서로의 위치를 바꾸기
# 2. 뒤집기
import sys

def revesi(N, set, goal):
    cnt = [ 0, 0 ]
    # cnt[0] : 검은돌의 개수 
    # cnt[1] : 흰돌의 개수

    for i in range(N):
        if set[i] != goal[i]:
            if set[i] == 'B':
                cnt[0] += 1
            else:
                cnt[1] += 1

    if cnt[0] >= cnt[1]:
        return cnt[0]
    
    else :
        return cnt[1]

T = int(input())
result = [0]*T

for i in range(T):
    N = int(input())
    # 1 <= N <= 100,000
    set = sys.stdin.readline().rstrip()
    goal = sys.stdin.readline().rstrip()
    result[i] = revesi(N, set, goal)

for i in range(T):
    print(result[i])
