#include <stdio.h>

int main() {
    int N, X;
    int i;
    scanf("%d %d", &N, &X);
    int A[N];
    for(i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }
    for(i = 0; i < N; i++) {
        if(A[i] < X) {
            printf("%d ", A[i]);
        }
    }
    return 0;
}
// 얘도 배열 없이 할 수 있으려나..
