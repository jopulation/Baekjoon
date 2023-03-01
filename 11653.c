// ���μ�����
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int PrimeCheck(int n);
int NextPrimeSearch(int number, int end);

int main() {
	int N; // 1 <= N <= 10,000,000
	int PN = 2;

	scanf("%d", &N);

	// N <= PN�̸� N�� ����ϰ� ������ ������ ��
	for (PN; N > PN && PN != -1; PN = NextPrimeSearch(PN, N)) {
		if ((N % PN) == 0) {
			if (PN == -1) {
				break;
			}
			while ((N % PN) == 0) {
				printf("%d\n", PN);
				N /= PN;
			}
		}
	}

	if(N != 1)
		printf("%d\n", N);
	
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

int NextPrimeSearch(int n, int N) {
	n++;
	for (n; n <= N; n++) {
		if (PrimeCheck(n) == 1) {
			return n;
		}
	}
	return -1;
}