# 세로읽기

import sys

s = [ ['']*15 for i in range(5) ]
max = 0
for i in range(5):
    s[i] = sys.stdin.readline().rstrip()
    if max < len(s[i]):
        max = len(s[i])

for i in range(max):
    for j in range(5):
        try:
            print(s[j][i], end="")
        except IndexError:
            continue
