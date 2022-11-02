// 커트라인
#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b)
{
	if (*(int*)a < *(int*)b)

		return 1;

	else if (*(int*)a > *(int*)b)

		return -1;

	else

		return 0;
}

int main() {
	int N;
	int k;
	int x[1000];
	scanf(" %d %d", &N, &k);
	for (int i = 0; i < N; i++) {
		scanf("%d", &x[i]);
	}
	qsort(x, N, sizeof(x[0]), compare);

	printf("%d", x[k - 1]);
	return 0;
}