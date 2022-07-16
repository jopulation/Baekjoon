#include <stdio.h>

int main() {
    int i; // 1 <= i <= 5
    int sum = 0;
    int A[5]; // 0 <= A <= 100
    
    for(i = 0; i < 5; i++) {
        scanf("%d", &A[i]);
        sum += A[i];
    }

    printf("%d\n", sum);

    return 0;
}