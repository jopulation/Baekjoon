# 삼각형과 세 변

while(True):
    s1, s2, s3 = map(int, input().split())
    if (s1 == s2 == s3 == 0):
        break
    # 삼각형의 조건
    if (2*max(s1, s2, s3) < s1+s2+s3):
        if(s1 == s2 or s2 == s3 or s3 == s1):
            if(s1 == s2 == s3):
                print("Equilateral")
            else:
                print("Isosceles")
        else:
            print("Scalene")
    else:
        print("Invalid")
