// �Ǻ���ġ �� 5
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int fibonacci(int n);

int main() {
	int n; // 2 <= n <= 20 �Ǵ� 0

	scanf("%d", &n);
	printf("%d", fibonacci(n));

	return 0;
}

int fibonacci(int n) {
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else
		return fibonacci(n - 1) + fibonacci(n - 2);
}