# 단어 정렬
# 실버5

import sys

n = int(sys.stdin.readline().strip()) # N(1 ≤ N ≤ 20,000)
words = set()  # 중복 제거를 위해 set 사용

for _ in range(n):
    word = sys.stdin.readline().strip()
    words.add(word)

# 정렬 기준: 1. 길이 2. 사전 순
sorted_words = sorted(words, key=lambda x: (len(x), x))

for word in sorted_words:
    print(word)