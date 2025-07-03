# 듣보잡
# 실버4

import sys

def binary_search(cards, target):
    left, right = 0, len(cards) - 1
    while left <= right:
        mid = (left + right) // 2
        if cards[mid] == target:
            return True
        elif cards[mid] < target:
            left = mid + 1
        else:
            right = mid - 1
    return False

n, m = map(int, sys.stdin.readline().split())
n_cards = [sys.stdin.readline().strip() for _ in range(n)]
n_cards = sorted(n_cards)

m_cards = [sys.stdin.readline().strip() for _ in range(m)]
lst = []
for card in m_cards:
    if binary_search(n_cards, card):
        lst.append(card)

lst = sorted(lst)
print(len(lst))
print(*lst, sep='\n')