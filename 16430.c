// 제리와 톰
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int A, B; // 1 ≤ A < B ≤ 9, A, B는 서로소

	scanf("%d %d", &A, &B);
	printf("%d %d\n", B - A, B);
	return 0;
}