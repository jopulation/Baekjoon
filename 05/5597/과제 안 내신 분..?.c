#include <stdio.h>

void Check(int num[]);

int main() {
    int i;
    int n; // 1 <= n <= 30
    int check[30] = { 0, };
    int temp;

    for(i = 0; i < 28; i++) {
        scanf("%d", &temp);
        check[temp-1] = 1;
    }
    Check(check);

    return 0;
}

void Check(int num[]) {
    int i;
    for(i = 0; i < 30; i++) {
        if(num[i] == 0)
            printf("%d\n", i+1);
    }
}