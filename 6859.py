# CCC Othello

import sys

# 입력으로 주어지는 게임 로그는 항상 올바른 게임 로그임이 보장된다.
offset =  [ [-1, -1], [0, -1], [1, -1], [-1, 0], [1, 0], [-1, 1], [0, 1], [1, 1] ]

# 빈공간 '.', 검은돌 'B', 흰돌 'W'
gameBoard = [ ['.']*10 for i in range(10) ]

cnt = [ 0, 0, 0]
# cnt[0] : 전체 돌의 개수 -> 얘는 필요 없기는 함.
# cnt[1] : 검은 돌의 개수
# cnt[2] : 흰 돌의 개수

color = 'B' # 시작은 무조건 검정돌

def colorChange(color):
    if color == 'W':
        return 'B'
    else:
        return 'W'

def moving(gameBoard, color, row, col, cnt):
    count = 0
    sum = 0
    roww = coll = -1
    oppColor = colorChange(color)
    gameBoard[row][col] = color

    for i in range(0, 8):  # 8방향
        roww = row + offset[i][0]
        coll = col + offset[i][1]
        count = 0

        while gameBoard[roww][coll] == oppColor: # offset 위치에 상대돌이 존재할 때
            roww += offset[i][0]
            coll += offset[i][1]
            count += 1

        if gameBoard[roww][coll] == '.': # 가장자리이거나 빈자리면 안 됨
            count = 0

        sum += count

        for j in range(count):
            gameBoard[row + (j+1)*offset[i][0]][col + (j+1)*offset[i][1]] = color
            count -= 1

    # 색에 따라서 cnt를 바꾸는 코드
    cnt[0] += 1
    if color == 'B':
        cnt[1] += (sum + 1)
        cnt[2] -= sum
    else:
        cnt[2] += (sum + 1)
        cnt[1] -= sum
        # 자신과 같은 색의 돌일 때

# 최대 62개의 값
s = (sys.stdin.readline().rstrip()).split()
# s[0] = configration (a, b, c)
# s[1] = N (0 <= N <= 30)
# s[1:2*N+1] = R C 조합 (1 <= R, C <= 8)

# Configration
if s[0] == 'a':
    gameBoard[4][4] = gameBoard[5][5] = 'W'
    gameBoard[4][5] = gameBoard[5][4] = 'B'
    cnt[1] = 2
    cnt[2] = 2
elif s[0] == 'b':
    for i in range(1, 9):
        gameBoard[i][i] = 'B'
        gameBoard[9-i][i] = 'W'
    cnt[1] = 8
    cnt[2] = 8
else: # 예외가 없으므로 'c'
    for i in range(1, 9):
        gameBoard[3][i] = gameBoard[4][i] = 'B'
        gameBoard[5][i] = gameBoard[6][i] = 'W'
    cnt[1] = 16
    cnt[2] = 16


for i in range(int(s[1])):
    col = int(s[2*i+2])
    row = int(s[2*i+3])
    moving(gameBoard, color, row, col, cnt)
    color = colorChange(color)
print(cnt[1], cnt[2])
