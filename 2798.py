# 블랙잭
# 브론즈2

n, m = map(int, input().split()) # N(3 ≤ N ≤ 100), M(10 ≤ M ≤ 300,000)
cards = map(int, input().split())
cards = list(cards)
# print(*cards)
h = 0

for i in range(0, n-2):
    sum1 = cards[i]
    for j in range(i+1, n-1):
        sum2 = sum1+cards[j]
        for k in range(j+1, n):
            sum = sum2 + cards[k]
            if(sum == m):
                print(m)
                exit(0)
            elif(sum>h and sum <m):
                h = sum
print(h)