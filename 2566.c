// ÃÖ´ñ°ª
#define _CRT_SECURE_NO_WARNINGS
#define NUM 9
#include <stdio.h>

int main() {
	int arr[NUM][NUM] = { 0, };

	int i, j;
	int max = -1;
	int row, col;

	for (i = 0; i < NUM; i++) {
		for (j = 0; j < NUM; j++) {
			scanf("%d", &arr[i][j]);
			if (max < arr[i][j]) {
				max = arr[i][j];
				row = i;
				col = j;
			}
		}
	}

	printf("%d\n%d %d\n", max, row+1, col+1);

	return 0;
}