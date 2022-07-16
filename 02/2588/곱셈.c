#include <stdio.h>

int main() {
    int a, b;
    int A, B, C;
    scanf("%d", &a);
    scanf("%d", &b);
    A = b / 100;
    B = (b % 100) / 10;
    C = b % 10;
    printf("%d\n", a*C);
    printf("%d\n", a*B);
    printf("%d\n", a*A);
    printf("%d\n", a*b);
    
    return 0;
}