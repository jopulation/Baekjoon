// 대표값2
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sort(int* arr);

int main() {
	int num[5] = { 0, }; // 100보다 작은 10의 배수 자연수
	int avg = 0;
	for (int i = 0; i < 5; i++) {
		scanf("%d", &num[i]);
		avg += num[i];
	}
	avg /= 5;

	printf("%d\n%d\n", avg, sort(num));

	return 0;
}
int sort(int* arr) {
	int count = 0;
	int min;
	int tmp;

	while (count < 5) {
		min = 100;
		for (int i = count; i < 5; i++) {
			if (min > arr[i]) {
				min = arr[i];
				tmp = arr[count];
				arr[count] = arr[i];
				arr[i] = tmp;
			}
		}
		count++;
	}
	return arr[2];
}