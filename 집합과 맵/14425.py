# 문자열 집합
# 실버4

import sys

n, m = map(int, sys.stdin.readline().split())
s = set(sys.stdin.readline().strip() for _ in range(n))
count = sum(1 for _ in range(m) if sys.stdin.readline().strip() in s)
print(count)