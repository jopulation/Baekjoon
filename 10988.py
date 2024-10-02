# 팰린드롬인지 확인하기

def CheckPalindrome(w):
    l = int(len(w))
    for i in range(l//2):
        if w[i] != w[l-1-i]:
            return 0
    return 1

print(CheckPalindrome(input()))
