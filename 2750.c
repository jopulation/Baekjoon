// 수 정렬하기
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void sort(int* arr, int n);

int main() {
	int N; // 1 <= N <= 1,000
	int num[1000];
	
	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf("%d", &num[i]);
	}
	sort(num, N);

	for (int i = 0; i < N; i++) {
		printf("%d\n", num[i]);
	}

	return 0;
}

void sort(int* arr, int n) {
	// 버블 정렬 느낌?
	int count = 0;
	int min;
	int tmp;

	while (count < n) {
		min = 1001;
		for (int i = count; i < n; i++) {
			if (min > arr[i]) {
				min = arr[i];
				tmp = arr[count];
				arr[count] = arr[i];
				arr[i] = tmp;
			}
		}
		count++;
	}
}