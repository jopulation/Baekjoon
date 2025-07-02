# 체스판 다시 칠하기
# 실버4

n, m = map(int, input().split()) # N과 M은 8보다 크거나 같고, 50보다 작거나 같은 자연수
board = [input() for _ in range(n)]  # 체스판 입력

minV = int(64)
for i in range(n-7):
    for j in range(m-7):
        # 8x8 체스판을 잘라내기
        sub_board = [row[j:j+8] for row in board[i:i+8]]
        # 흰색 시작과 검은색 시작 두 가지 경우의 수를 계산
        white_start = sum(sub_board[x][y] != ('B' if (x + y) % 2 == 0 else 'W') for x in range(8) for y in range(8))
        black_start = sum(sub_board[x][y] != ('W' if (x + y) % 2 == 0 else 'B') for x in range(8) for y in range(8))
        if minV > min(white_start, black_start):
            minV = min(white_start, black_start)
            if(minV == 0):
                print(0)
                exit(0)
print(minV)