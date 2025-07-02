# 소트인사이드
# 실버5

import sys

n = sys.stdin.readline().strip()
arr = sorted(n, reverse=True)
print(''.join(arr))
# 시간복잡도: O(N log N) (N: 입력의 길이)
# 공간복잡도: O(N) (N: 입력의 길이)
# 이 코드는 입력된 숫자를 문자열로 받아서 정렬한 후 출력하는 방식으로, 시간복잡도가 O(N log N)이다.
# 입력의 길이에 따라 정렬하는 데 시간이 걸리지만, 입력의 길이가 제한되어 있기 때문에 효율적이다.
# 따라서 이 코드는 시간복잡도와 공간복잡도 모두 효율적이다.