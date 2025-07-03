# 서로 다른 부분 문자열의 개수
# 실버3

import sys

s = sys.stdin.readline().strip()  # 문자열 S(1 ≤ |S| ≤ 100,000)
distinct_substrings = set()
for i in range(len(s)):
    for j in range(i + 1, len(s) + 1):
        distinct_substrings.add(s[i:j])
print(len(distinct_substrings))