// 터널의 입구와 출구
#include <stdio.h>

int main() {
    int n; // n <= 10000, n은 자연수
    int carNum;
    int carIm, carEx; // carNum <= 100, carNum, maxNum은 자연수
    int maxNum;
    int err = 0;

    scanf("%d", &n);
    scanf("%d", &carNum);

    maxNum = carNum;
    for(int i = 0; i < n; i++) {
        scanf("%d %d", &carIm, &carEx);
        carNum = carNum + carIm - carEx;
        if(carNum < 0) {
            err++;
        }
        if(maxNum < carNum) {
            maxNum = carNum;
        }
    }
    if(err > 0) {
        printf("0\n");
        return 0;
    }
    printf("%d\n", maxNum);
    return 0;
}