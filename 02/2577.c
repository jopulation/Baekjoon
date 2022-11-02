// 숫자의 개수
#include <stdio.h>

int main() {
    int A, B, C;
    int r;
    int total = 0;
    int count[10];
    for(int i = 0; i < 10; i++) {
        count[i] = 0;
    }
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);

    total = A * B * C;
    while(total != 0) {
        r = total % 10;
        count[r]++;
        total /= 10; 
    }
    for(int i = 0; i < 10; i++) {
        printf("%d\n", count[i]);
    }
    return 0;
}