# 좌표 정렬하기 2
# 실버5

import sys

n = int(sys.stdin.readline().strip())  # N(1 ≤ N ≤ 100,000)
arr = []

for _ in range(n):
    x, y = map(int, sys.stdin.readline().strip().split())
    arr.append((x, y))

arr.sort(key=lambda point: (point[1], point[0]))  # y좌표 기준으로 정렬, y좌표가 같으면 x좌표 기준으로 정렬

for point in arr:
    print(point[0], point[1])  # 각 좌표를 출력