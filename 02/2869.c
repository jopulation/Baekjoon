// 달팽이는 올라가고 싶다
#include <stdio.h>

int main()
{
    int A, B, V; // 1 ≤ B < A ≤ V ≤ 1,000,000,000

    scanf("%d %d %d", &A, &B, &V);
    V -= A;

    if (V <= 0)
        printf("1\n");
    else if (V % (A - B) == 0)
        printf("%d\n", V / (A - B) + 1);
    else
        printf("%d\n", V / (A - B) + 2);
    return 0;
}