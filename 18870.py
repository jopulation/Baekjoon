# 좌표 압축
# 실버2

import sys

n = int(sys.stdin.readline().strip())  # N(1 ≤ N ≤ 1,000,000)
coordinates = list(map(int, sys.stdin.readline().strip().split()))
compressed = {val: idx for idx, val in enumerate(sorted(set(coordinates)))}
for coord in coordinates:
    print(compressed[coord], end=' ')
print()  # 출력 후 줄바꿈
# 시간복잡도: O(N log N) (N: 입력의 개수)
# 공간복잡도: O(N) (N: 입력의 개수)

# 아래는 시간초과 구문
# u_coordinates = [0] * len(coordinates)
# minV = min(coordinates)

# for i in range(len(sorted(set(coordinates)))):
#     for j in range(len(coordinates)):
#         if(coordinates[j] == minV):
#             u_coordinates[j] = i
#     minV = min([x for x in coordinates if x > minV]) if any(x > minV for x in coordinates) else None
# print(*u_coordinates, sep=' ')  # 출력 후 줄바꿈

