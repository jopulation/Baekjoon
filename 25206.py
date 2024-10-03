# 너의 평점은

import sys

gradePoint = { "A+": 4.5, "A0": 4.0, "B+": 3.5, "B0": 3.0, "C+": 2.5, "C0": 2.0, "D+": 1.5, "D0": 1.0, "F": 0.0 }
score = 0.0
credit = 0.0
ety =[]

while(True):
    s = (sys.stdin.readline().rstrip()).split()
    if (s == ety):
        break
    
    elif(s[2] != 'P'):
        credit += float(s[1])
        score += float(s[1])*gradePoint[s[2]]
        
print(score/credit) # G.P.A
