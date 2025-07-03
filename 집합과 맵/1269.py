# 대칭 차집합
# 실버4

import sys
n, m = map(int, sys.stdin.readline().split())
n_cards = set(map(int, sys.stdin.readline().strip().split()))
m_cards = set(map(int, sys.stdin.readline().strip().split()))

result = n_cards.symmetric_difference(m_cards)
print(len(result))