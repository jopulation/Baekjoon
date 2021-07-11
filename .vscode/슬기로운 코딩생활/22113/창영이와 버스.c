//제한
// 2 ≤ N ≤ 100
// 1 ≤ M ≤ N
// 1 ≤ AS,E ≤ 1,000 (1 ≤ S, E ≤ N)
// 버스의 번호는 1 이상 N 이하의 자연수
// 창영이는 같은 버스를 여러 번 이용하지 않는다.

#include <stdio.h>

int main() {
    
    short i, j;
    short N, M;
    scanf("%hd %hd", &N, &M);

    short sequence[M];
    int charge[N][N];
    int total_charge = 0;

    for (i = 0; i < M; i++) {
        scanf("%hd", &sequence[i]);
    }

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            scanf("%d", &charge[i][j]);
        }
    }
    
    for (i = 0; i < (M-1); i++) {
        total_charge += charge[sequence[i]-1][sequence[i+1]-1];
    }

    printf("%d", total_charge);

    return 0;
}