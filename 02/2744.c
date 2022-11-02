// 대소문자 바꾸기
#include <stdio.h>
#include <string.h>

int main() {
    int i;
    int len;
    char words[101];

    gets(words);

    len = strlen(words);
    for(i = 0; i < len; i++) {
        // 대문자
        if(words[i] >= 65 && words[i] <= 90) {
            words[i] = words[i] - 'A' + 'a';
        }
        else if(words[i] >= 97 && words[i] <= 122) {
            words[i] = words[i] - 'a' + 'A';
        }
    }

    puts(words);
    return 0;
}