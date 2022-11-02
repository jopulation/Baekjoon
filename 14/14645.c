// 와이버스 부릉부릉

#include <stdio.h>

int main()
{
    int N;    // 1 ≤ N ≤ 100,000
    int K;    // 1 ≤ K ≤ 10,000
    int A, B; // 0 ≤ A, B ≤ 10,000

    scanf("%d %d", &N, &K);
    for (int i = 0; i < N; i++)
    {
        scanf("%d %d", &A, &B);
        K = K + A - B;
    }

    printf("비와이\n");
    return 0;
}