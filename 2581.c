// �Ҽ�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int PrimeCheck(int number);

int main() {
    int M, N; // M <=N <= 10000, �ڿ���
    int tmp;
    int min = 0;
    int sum = 0;
    int count = 0;

    scanf("%d", &M);
    scanf("%d", &N);

    for (M; M <= N; M++) {
        if (PrimeCheck(M) == 1) {
            if (count == 0) {
                min = M;
                count++;
            }
            sum += M;
        }
    }
    if (min == 0) {
        // �Ҽ��� ���� ��
        printf("-1\n");
        return 0;
    }
    printf("%d\n%d\n", sum, min);
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