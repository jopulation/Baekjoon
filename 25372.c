// 성택이의 은밀한 비밀번호
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	// 비밀번호는 6자리 이상 9자리 이하여야 한다.
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