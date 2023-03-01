// 소수 찾기
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int PrimeCheck(int number);

int main() {
    int N; // N <= 100
    int PN = 0;
    int tmp;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &tmp);
        PN += PrimeCheck(tmp);
    }
    printf("%d\n", PN);
    return 0;
}

int PrimeCheck(int n) {
    if (n == 1) {
        return 0;
    }
    if (n == 2) {
        // ������ ¦�� �Ҽ� 2.
        return 1;
    }
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            // ������ ��������, �Ҽ��� �ƴ�
            return 0;
        }
    }
    return 1;
}
// �Ҽ��� 1�� �ڱ��ڽŸ� ����� ������.