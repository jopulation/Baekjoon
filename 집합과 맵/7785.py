# 회사의 있는 사람
# 실버5

import sys

n = int(sys.stdin.readline().strip())
present = set()
for _ in range(n):
    name, status = sys.stdin.readline().strip().split()
    if status == "enter":
        present.add(name)
    else:
        present.discard(name)
for name in sorted(present, reverse=True):
    print(name)