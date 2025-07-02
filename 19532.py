# 수학은 비대면강의입니다
# 브론즈2

a,b,c,d,e,f = map(int, input().split()) # (-999 <= a,b,c,d,e,f <= 999)
x = (c * e - b * f) / (a * e - b * d)
y = (a * f - c * d) / (a * e - b * d)
print(int(x), int(y)) # x, y는 정수