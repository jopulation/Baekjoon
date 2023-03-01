// ���丮�� 2
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

long long int factorial(int num);

int main() {
	int N; // 0 <= N <= 20

	scanf("%d", &N);
	printf("%lld\n", factorial(N));

	return 0;
}

long long int factorial(int n) {
	if (n == 0)
		return 1;
	else
		return n * factorial(n - 1);
}