# 직사각형에서 탈출

x, y, w, h = map(int, input().split())

# x, y, (x-w), (y-h) 중 가장 작은 값을 찾기.
# 대각선으로 가는 것은 느리기 때문에 패스

numbers = [x, y, (w-x), (h-y)]
print(min(numbers))
