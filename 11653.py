# 소인수분해

def prime(n):
  while n%2 == 0:
    print(2)
    n /= 2
  
  d = 3
  while d*d <= n:
    while n%d == 0:
      print(d)
      n /= d
    d += 1
  
  if n != 1:
    print(int(n))

n  = int(input())

if n != 1:
  prime(n)
