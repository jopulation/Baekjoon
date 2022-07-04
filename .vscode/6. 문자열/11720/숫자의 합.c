#include <stdio.h>

int main() {
    int N;
    int sum = 0;
    char number[101];

    scanf("%d", &N);
    getchar();
    gets(number);
    for(int i = 0; i < N; i++) {
        sum += number[i] - '0';
    }
    printf("%d", sum);

    return 0;
}