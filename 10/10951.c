// A+B - 4
#include <stdio.h>

int main() {
    int A, B;
    while(scanf("%d %d", &A, &B) != EOF) {
        printf("%d\n", (A+B));
    }
    return 0;
}

// 데이터 끝나면 EOF를 이용!

