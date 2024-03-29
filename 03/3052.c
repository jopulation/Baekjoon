// 나머지
#include <stdio.h>

int main() {
    int number[10];
    int i, j;
    int temp;
    int count = 1;
    int pos;
    for(i = 0; i < 10; i++) {
        scanf("%d", &number[i]);
        number[i] %= 42;
    }
    // 오름차순 정렬
    for(i = 0; i < 10; i++) {
        for(j = 0; j < 10; j++) {
            if(number[i] < number[j]) {
                temp = number[i];
                number[i] =  number[j];
                number[j] = temp;
            }
        }
    }

    // 중복 방지 counting
    pos = number[0];
    for(i = 0; i < 10; i++) {
        if(pos != number[i]) {
            count++;
            pos = number[i];
        }
    }
    printf("%d", count);
    
    return 0;
}