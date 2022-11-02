// 더하기 사이클
#include <stdio.h>

int main() {
    int N, M; // 0 <= N <= 99
    int count = 0;
    
    scanf("%d", &N);
    M = N;
    do {
        M = (M % 10)*10 + ( ( (M/10) + (M%10) )% 10 );
        count++;
    } while(N != M);

    printf("%d", count);
    
    return 0;
}