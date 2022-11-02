// 나는 행복합니다~
#include <stdio.h>

int main()
{
    int N, M; // 1 ≤ N, M ≤ 30,000
    int K;    //  0 ≤ K ≤ N×M-1
    int i, j;
    int count = 0;

    scanf("%d %d %d", &N, &M, &K);
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
            if (count == K)
            {
                printf("%d %d\n", i, j);
                return 0;
            }
            ++count;
        }
    }

    return 0;
}