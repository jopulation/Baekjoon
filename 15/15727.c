// 조별과제를 하려는데 조장이 사라졌다
#include <stdio.h>

int main() {
    int L; // 1 ≤ L ≤ 1,000,000

    scanf("%d", &L);
    L += 4;
    printf("%d\n", L/5);

    return 0;
}