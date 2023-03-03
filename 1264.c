// 모음의 개수 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
	char string[256];
	char tmp;
	int i;
	int len;
	int count;

	while (1) {
		gets(string);
		if (strcmp(string, "#") == 0)
			break;
		len = strlen(string);
		count = 0;

		for (i = 0; i < len; i++) {
			tmp = tolower(string[i]);
			if (tmp == 'a' || tmp == 'e' || tmp == 'i' || tmp == 'o' || tmp == 'u')
				count++;
		}
		printf("%d\n", count);
	}

	return 0;
}