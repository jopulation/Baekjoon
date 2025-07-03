# 숫자 카드 2
# 실버4

import sys

def lower_bound(cards, target):
    left, right = 0, len(cards) - 1
    while left < right:
        mid = (left + right) // 2
        if cards[mid] < target:
            left = mid + 1
        else:
            right = mid
    return left

def upper_bound(cards, target):
    left, right = 0, len(cards) - 1
    while left < right:
        mid = (left + right) // 2
        if cards[mid] <= target:
            left = mid + 1
        else:
            right = mid
    return right

n = int(sys.stdin.readline().strip())  # N(1 ≤ N ≤ 500,000)
n_cards = list(map(int, sys.stdin.readline().strip().split()))  # 숫자 카드들
n_cards.append(max(n_cards) + 0.5)  # upper_bound를 위한 추가
n_cards = sorted(n_cards)

m = int(sys.stdin.readline().strip())
m_cards = list(map(int, sys.stdin.readline().strip().split()))  # M(1 ≤ M ≤ 500,000)
for card in m_cards:
    print(upper_bound(n_cards, card) - lower_bound(n_cards, card), end=' ')
print()