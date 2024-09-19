# 소인수분해

# 소수 판별
def PrimeCheck(N):
    primeList = [2]
    nextNum = 3 # 두 번째 소수부터 시작
    num = N
    cnt = 0

    while num % 2 == 0:
        num /= 2
        print(2)
        cnt += 1

    while nextNum <= num + 1:
        for p in primeList:
            if p > nextNum / p:
                primeList.append(nextNum)
                while num % nextNum == 0:
                    num /= nextNum
                    print(nextNum)
                    cnt += 1
                break

            elif nextNum % p == 0:
                break
        nextNum += 1

    if cnt == 0: # N이 소수일 때
        print(N)

#  1<= N <= 10,000,000
N = int(input())
PrimeCheck(N)
