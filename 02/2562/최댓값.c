#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int number[9];
	int max = 0;
	int count = 0;
	for (int i = 0; i < 9; i++) {
		scanf("%d", &number[i]);
	}
	// Max
	for (int i = 0; i < 9; i++) {
		if (max < number[i]) {
			max = number[i];
			count = i + 1;
		}
	}
	printf("%d\n%d", max, count);
	return 0;
}