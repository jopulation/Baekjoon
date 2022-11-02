// 가희와 방어율 무시
#include <stdio.h>

int main() {
    float a, b;

    scanf("%f %f", &a, &b);
    
    if((a*(100-b)/100) >= 100) {
        printf("0\n");
    }
    else
        printf("1\n");

    return 0;
}