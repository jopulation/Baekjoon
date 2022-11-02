// 사파리월드
#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int N, M; // -2,000,000,000 ≤ N, M ≤ 2,000,000,000
    unsigned int A;

    scanf("%ld %ld", &N, &M);
    A = labs((N - M));
    printf("%u\n", A);

    return 0;
}