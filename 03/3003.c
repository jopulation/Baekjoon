// 킹, 퀸, 룩, 비숍, 나이트, 폰
#include <stdio.h>

int main() {
    int i;
    int pieces[6] ={ 1, 1, 2, 2, 2, 8 };
    int myPieces[6];

    for(i = 0; i < 6; i++) {
        scanf("%d", &myPieces[i]);
        pieces[i] -= myPieces[i];
    }

    for(i = 0; i < 6; i++) {
        printf("%d ", pieces[i]);
    }
    printf("\n");

    return 0;
}