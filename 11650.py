# 좌표 정렬하기
# 실버5

import sys

n = int(sys.stdin.readline().strip())  # N(1 ≤ N ≤ 100,000)
arr = []

for _ in range(n):
    x, y = map(int, sys.stdin.readline().strip().split())
    arr.append((x, y))

arr.sort(key=lambda point: (point[0], point[1]))  # x좌표 기준으로 정렬, x좌표가 같으면 y좌표 기준으로 정렬

for point in arr:
    print(point[0], point[1])  # 각 좌표를 출력
# 시간복잡도: O(N log N) (N: 입력의 개수)
# 공간복잡도: O(N) (N: 입력의 개수)
# 이 코드는 입력된 좌표를 튜플로 저장하고, x좌표와 y좌표를 기준으로 정렬한 후 출력하는 방식으로, 시간복잡도가 O(N log N)이다.
# 따라서 이 코드는 시간복잡도와 공간복잡도 모두 효율적이다.
# 입력의 개수가 최대 100,000개이므로 O(N log N) 시간복잡도로 충분히 처리할 수 있다.
# 정렬 기준을 x좌표로 하고, x좌표가 같을 경우 y좌표로 정렬하는 방식으로 문제를 해결하였다.