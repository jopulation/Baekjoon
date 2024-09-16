# 오델로

# 빈공간 '.', 검은돌 'B', 흰돌 'W'

# 입력으로 주어지는 게임 로그는 항상 올바른 게임 로그임이 보장된다.
offset =  [ [-1, -1], [0, -1], [1, -1], [-1, 0], [1, 0], [-1, 1], [0, 1], [1, 1] ]

def boardPrint(gameBoard):
    for i in range(1, 7):
        for j in range(1, 7):
            print(gameBoard[i][j], end="")
        print()

def colorChange(color):
    if color == 'W':
        return 'B'
    else:
        return 'W'

def moving(gameBoard, color, row, col, cnt):
    offCnt = [0 for i in range(8)] # 8방향
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



def resultPrint(cnt):
    if cnt[1] > cnt[2]:
        print("Black")
    else:
        print("White")

# 게임보드 초기상태
gameBoard = [ ['.']*(8) for i in range(8) ]
gameBoard[3][3] = gameBoard[4][4] = 'W'
gameBoard[3][4] = gameBoard[4][3] = 'B'

cnt = [ 4, 2, 2]
# cnt[0] : 전체 돌의 개수
# cnt[1] : 검은 돌의 개수
# cnt[2] : 흰 돌의 개수

color = 'B'
N = int(input()) # 1 <= N <= 32

for i in range(N):
    row, col = map(int, input().split())
    moving(gameBoard, color, row, col, cnt)
    color = colorChange(color)

boardPrint(gameBoard)
resultPrint(cnt)
