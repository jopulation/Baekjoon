// 알파벳 찾기
#include <stdio.h>

int main() {
    int i, j;
    char S[101];
    int Alpha[26];

    gets(S);

    // 알파벳 개수 초기화
    for(i = 0; i < 26; i++) {
        Alpha[i] = -1;
    }

    for(i = 0; S[i] != '\0'; i++) {
        for(j = 0; j < 26; j++) {
            if(S[i] == 'a' + j) {
                if(Alpha[j] == -1) {
                    Alpha[j] = i;
                }
            }
        }
    }

    for(i = 0; i < 26; i++) {
        printf("%d ", Alpha[i]);
    }

    return 0;
}