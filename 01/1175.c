// 단어공부
#include <stdio.h>
#include <string.h>

int main() {
    int i, j;
    int len;
    int max;
    int maxNum;

    char answer = '\0';
    char string[1000001];
    int alpha[26] = { 0, };
    
    string[0] = '\0';
    gets(string);
    len = strlen(string);

    for(i = 0; i < len; i++) {
        if(65 <= string[i] && string[i] <= 90)
            alpha[string[i] - 65]++;

        else if(97 <= string[i] && string[i] <= 122)
            alpha[string[i] - 97]++;
    }

    // Max 찾기
    max = alpha[0];
    maxNum = 0;

    for(i = 0; i < 26; i++) {
        if(max < alpha[i]) {
            max = alpha[i];
            maxNum = i;
        }
    }

    // 최댓값이 중복인지 찾기
    for(i = 0; i < 26; i++) {
        if(i != maxNum){
            if(max == alpha[i]) {
                answer = '?';
                break;
            }
        }
    }

    if(answer != '?')
        answer = 'A' + maxNum;

    printf("%c", answer);

    return 0;
}