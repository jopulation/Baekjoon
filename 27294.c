// ¸î°³°í?
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int T;	// 0 <= T <= 23
	int S;	// 0 <= S <= 1
	int riceNum = 0;

	scanf("%d %d", &T, &S);
	if (S == 1 || T <= 11 || T > 16)
		riceNum = 280;
	else
		riceNum = 320;
	printf("%d\n", riceNum);

	return 0;
}