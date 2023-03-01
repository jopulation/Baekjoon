// �˰��� ���� - ���� ���� 1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void merge_sort(int* A, int p, int r) {
	if (p < r) {
		int q = (p + r) / 2;	// q�� p, r�� �߰� ����
		merge_sort(A, p, q);	// ���ݺ� ����
		merge_sort(A, q + 1, r);// �Ĺݺ� ����
		merge(A, p, q, r);		// ����
	}
}
// A[p..q]�� A[q + 1..r]�� �����Ͽ� A[p..r]�� �������� ���ĵ� ���·� �����.
// A[p..q]�� A[q + 1..r]�� �̹� ������������ ���ĵǾ� �ִ�.
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
	while (i <= q) // ���� �迭 �κ��� ���� ���
		tmp[t++] = A[i++];
	while (j <= r) // ������ �迭 �κ��� ���� ���
		tmp[t++] = A[j++];
	i = p; t = 1;
	while (i <= r)
		A[i++] = tmp[t++];
}