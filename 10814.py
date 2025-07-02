# 나이순 정렬
# 실버5

import sys

n = int(sys.stdin.readline().strip())   # N(1 ≤ N ≤ 100,000)
people = []

for _ in range(n):
    age, name = sys.stdin.readline().strip().split()
    people.append((int(age), name))

people.sort(key=lambda x: x[0])  # 나이순으로 정렬

for person in people:
    print(person[0], person[1])  # 나이와 이름 출력