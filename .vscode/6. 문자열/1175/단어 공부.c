#include <stdio.h>
#include <ctype.h>

int main() {
    int i, j;
    int max;
    int maxNum;

    char answer;
    char string[1000001];
    int alpha[26] = { 0, };
    
    string[0] = '\0';
    gets(string);

    for(i = 0; string[i] != '\0'; i++) {
        // 소문자를 대문자로 바꾸기
        if(islower(string[i]))
            string[i] = toupper(string[i]);

        for(j = 0; j < 26; j++) {
            if(string[i] == 'A' + j) {
                alpha[j]++;
            }
        }
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