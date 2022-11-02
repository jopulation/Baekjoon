// 펙토리얼
#include <stdio.h>

int factorial(int number);

int main() {
    int N; // 0 <= N <= 12
    scanf("%d", &N);
    printf("%d\n", factorial(N)); 

    return 0;
}

int factorial(int number) {
    if(number == 0)
        return 1;
    else if(number > 0)
        return number*factorial(number-1);
    return -1;
}