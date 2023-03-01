// WARBOY
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int A, B, C;
	// 1 <= A, B, C <= 1000
	// B는 항상 A의 배수

	scanf("%d %d %d", &A, &B, &C);
	printf("%d\n", 3*(B/A)*C);
	return 0;
}