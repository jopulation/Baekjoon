// �������� ������ ��й�ȣ
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	// ��й�ȣ�� 6�ڸ� �̻� 9�ڸ� ���Ͽ��� �Ѵ�.
	int i;
	int N; // 1 <= N <= 1000
	int len = 0;
	char tmp[21] = "";

	scanf("%d", &N);
	getchar();
	for (i = 0; i < N; i++) {
		gets(tmp);
		len = strlen(tmp);
		if (len >= 6 && len <= 9)
			printf("yes\n");
		else
			printf("no\n");
	}
	return 0;
}