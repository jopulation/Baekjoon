# 수 정렬하기 2
# 실버5

import sys
a=[]
for i in range(int(sys.stdin.readline().strip())):
    a.append(int(sys.stdin.readline().strip()))

a.sort()
print(*a, sep="\n")