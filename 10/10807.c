// 개수 세기
#include <stdio.h>

int main()
{
    int N; // 1 <= N <= 100
    int v; // -100 <= v <= 100
    int sum = 0;

    scanf("%d", &N);
    int num[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &num[i]);
    }
    scanf("%d", &v);

    for (int i = 0; i < N; i++)
    {
        if (v == num[i])
            sum++;
    }

    printf("%d\n", sum);

    return 0;
}