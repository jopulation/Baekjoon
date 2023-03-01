// »öÁ¾ÀÌ
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int paper[100][100] = { 0, };
	int paperN; // paperN <= 100
	int area = 0;
	int row, col;

	int r, c;

	scanf("%d", &paperN);
	for (int i = 0; i < paperN; i++) {
		scanf("%d %d", &row, &col);
		area += 100;
		for (r = row; r < row + 10; r++) {
			for (c = col; c < col + 10; c++) {
				if (paper[r][c] == 1)
					area--;
				paper[r][c] = 1;
			}
		}
	}
	printf("%d\n", area);

	return 0;
}