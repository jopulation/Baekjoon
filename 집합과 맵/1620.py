# 나는야 포켓몬 마스터 이다솜
# 실버4

import sys
n, m = map(int, sys.stdin.readline().split())
pokedex = {}
for i in range(1, n + 1):
    name = sys.stdin.readline().strip()
    pokedex[i] = name
    pokedex[name] = i
    
query = [sys.stdin.readline().strip() for _ in range(m)]
for q in query:
    print(pokedex[int(q)]) if q.isdigit() else print(pokedex[q])