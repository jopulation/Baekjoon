// 세금
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	float N;
	// 1,000 <= N <=10,000,000, 1,000의 배수

	scanf("%f", &N);
	printf("%0.0f %0.0f\n", N * 0.78, N * 0.956);
	return 0;
}