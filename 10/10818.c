// 최소, 최대
#include <stdio.h>

int main() {
	int N;
	scanf("%d", &N);
	int number[1000000];

	for (int i = 0; i < N; i++) {
		scanf("%d", &number[i]);
	}
	int max = number[0];
	int min = number[0];
	// MAX 찾는 중
	for (int i = 1; i < N; i++) {
		if (max < number[i]) {
			max = number[i];
		}
	}
	// MIN 찾는 중
	for (int i = 1; i < N; i++) {
		if (min > number[i]) {
			min = number[i];
		}
	}
	printf("%d %d", min, max);

	return 0;
}