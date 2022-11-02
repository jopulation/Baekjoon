// 별 찍기 - 3
#include <stdint.h>

int main()
{
    int N; // 1<= 0 <= 100
    int i, j;

    scanf("%d", &N);
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N - i; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}