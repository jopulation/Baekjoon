// 두 수 비교하기
#include <stdio.h>

int main() {
    int A;
    int B;

    scanf("%d %d", &A, &B);
    if(A > B)
        printf(">");

    else if (A < B)
        printf("<");

    else
        printf("==");
    
    return 0;
}
