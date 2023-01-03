// ACM 호텔
#include <stdio.h>

int main() {
    int H, W; // 1 <= H, W <= 99
    int N; // 1 <= N <= H x W
    int T;

    scanf("%d", &T);
    for(int i = 0; i < T; i++) {
        scanf("%d %d %d", &H, &W, &N);
        printf("%d\n", (((N-1)%H)+1)*100 + (N-1)/H+1);
    }
    return 0;
}