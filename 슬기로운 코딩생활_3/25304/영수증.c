#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    int X;
    int N;
    int total = 0;
    int a[100];
    int b[100];
    scanf("%d", &X);
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d %d", &a[i], &b[i]);
        total += (a[i] * b[i]);
    }
    if (X == total) {
        printf("Yes");
    }
    else
        printf("No");
    return 0;
}
