// 0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ\$%*+-./:
#include <stdio.h>

int main() {
    int i, j, k;
    int T; // 0 <= T <= 1000
    int R[1001]; // 1 <= R <= 8
    char S[1001][30];

    scanf("%d", &T);

    for(i = 0; i < T; i++) {
        scanf("%d %s", &R[i], &S[i]);
    }

    for(i = 0; i < T; i++) {
        for(j = 0; S[i][j] != '\0'; j++) {
            for(k = 0; k < R[i]; k++) {
                printf("%c", S[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}