// 검증수
#include <stdio.h>

int main() {
    int number[5];
    int ss = 0;
    for(int i= 0; i < 5; i++) {
        scanf("%d", &number[i]);
        ss += number[i]*number[i];
    }
    ss %= 10;
    printf("%d\n", ss);

    return 0;
}