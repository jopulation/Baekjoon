// 세수정렬
#define _CRT_SECURE_NO_WARNINGS
#define NUMBER 3
#include <stdio.h>

int main() {
	int num[NUMBER];
	int min;
	int i, j;
	int tmp;

	for (i = 0; i < NUMBER; i++) {
		scanf("%d", &num[i]);
	}
	
	for (i = 0; i < NUMBER; i++) {
		min = num[i];
		for (j = i; j < NUMBER; j++) {
			if (min > num[j]) {
				min = num[j];
				tmp = num[i];
				num[i] = num[j];
				num[j] = tmp;
			}
		}
	}
	for (i = 0; i < NUMBER; i++) {
		printf("%d ", num[i]);
	}
	return 0;
}