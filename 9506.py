# 약수들의 합

perfectNum = {6: "6 = 1 + 2 + 3", 28: "28 = 1 + 2 + 4 + 7 + 14", 496: "496 = 1 + 2 + 4 + 8 + 16 + 31 + 62 + 124 + 248", 8128: "8128 = 1 + 2 + 4 + 8 + 16 + 32 + 64 + 127 + 254 + 508 + 1016 + 2032 + 4064"}

arr = []
while(True):
    # 2 < n < 100,000
    n = int(input())
    
    if n == -1:
        break

    if n in perfectNum:
        arr.append(perfectNum[n])
    else:
        arr.append(str(n) + " is NOT perfect.")

print(*arr, sep='\n')
