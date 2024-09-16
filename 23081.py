import sys

# 오델로
offset =  [ [-1, -1], [0, -1], [1, -1], [-1, 0], [1, 0], [-1, 1], [0, 1], [1, 1] ]

def misPlace(gameBoard, row, col):
    # 모든 경우의 수를 다 세는 코드로 변경
    # 전에는 8방향 중 하나만 가능해도 종료를 했으나, 이번에는 모든 방향을 확인.
    sum = 0

    for i in range(0, 8): # 8방향
        roww = row + offset[i][0]
        coll = col + offset[i][1]
        count = 0

        while gameBoard[roww][coll] == 'W': # offset 위치에 상대돌이 존재할 때
            roww += offset[i][0]
            coll += offset[i][1]
            count += 1

        if gameBoard[roww][coll] == '.': # 가장자리이거나 빈자리면 안 됨
            count = 0

        sum += count
        # 자신과 같은 색의 돌일 때

    return sum

def imposBoard(gameBoard, N): # 모든 경우를 실행하고 가능한 자리를 표시.
    max = 0
    for j in range(1, N+1):
        for i in range(1, N+1):
            if gameBoard[i][j] == '.':
                sum = misPlace(gameBoard, i, j)
                if max < sum:
                    max = sum
                    row = i - 1
                    col = j - 1
    if max == 0:
        print("PASS")
    else:
        print(row, col)
        print(max)

N = int(input()) # 3 <= N <= 500
gameBoard = [['.']*(N+2) for i in range(N+2)]

# 빈공간 '.', 검은돌 'B', 흰돌 'W'

for i in range(1, N+1):
        s = sys.stdin.readline().rstrip()
        for j in range(1, N+1):
            gameBoard[j][i] = s[j-1]
# 한 줄로 입력 후 한 문자씩 데이터에 넣는 작업 필요

imposBoard(gameBoard, N)
