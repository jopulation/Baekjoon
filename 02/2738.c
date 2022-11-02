// 행렬 덧셈
#include <stdio.h>

int main()
{
    int i, j;
    int r, c;
    scanf("%d %d", &r, &c);
    int N[r][c], M[r][c], s[r][c];

    for (i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &N[i][j]);
            s[i][j] = N[i][j];
        }
    }
    for (i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &M[i][j]);
            s[i][j] += M[i][j];
        }
    }
    for (i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            printf("%d ", s[i][j]);
        }
        printf("\n");
    }
        return 0;
}