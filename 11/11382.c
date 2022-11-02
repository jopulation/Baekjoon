// 꼬마 정민
#include <stdio.h>

int main()
{
    long long A, B, C; // 1 <= A, B, C <= 10^12
    long long sum;

    scanf("%lld %lld %lld", &A, &B, &C);
    sum = A + B + C;
    printf("%lld\n", sum);

    return 0;
}