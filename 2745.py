# 진법 변환

import sys

def bFormation(n, b):
    power = len(n)
    num = 0

    for i in range(len(n)):
        # 숫자일 때
        if 48 <= ord(n[i]) <= 57:
            num += int(n[i])*pow(int(b), power-1)
            power += -1
        # 알파벳일 때
        else:
            num += (ord(n[i])-55)*pow(int(b), power-1)
            # ord('A')는 65
            power += -1
    print(num)

n, b = input().split()
bFormation(n, b)
