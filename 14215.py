# 세 막대

# 1 <= a, b, c <= 100
a, b, c = map(int, input().split())

if 2*max(a, b, c) < a+b+c :
    print(a+b+c)
else:
    print(2*(a+b+c-max(a, b, c))-1)
