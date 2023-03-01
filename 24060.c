// 알고리즘 수업 - 병합 정렬 1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void merge_sort(int* A, int p, int r) {
	if (p < r) {
		int q = (p + r) / 2;	// q는 p, r의 중간 지점
		merge_sort(A, p, q);	// 전반부 정렬
		merge_sort(A, q + 1, r);// 후반부 정렬
		merge(A, p, q, r);		// 병합
	}
}
// A[p..q]와 A[q + 1..r]을 병합하여 A[p..r]을 오름차순 정렬된 상태로 만든다.
// A[p..q]와 A[q + 1..r]은 이미 오름차순으로 정렬되어 있다.
void merge(int* A, int p,int q, int r) {
	int* tmp;
	int i = p;
	int j = q;
	int t = 1;

	while (i <= q && j <= r) {
		if (A[i] <= A[j])
			tmp[t++] = A[i++];
		else
			tmp[t++] = A[j++];
	}
	while (i <= q) // 왼쪽 배열 부분이 남은 경우
		tmp[t++] = A[i++];
	while (j <= r) // 오른쪽 배열 부분이 남은 경우
		tmp[t++] = A[j++];
	i = p; t = 1;
	while (i <= r)
		A[i++] = tmp[t++];
}