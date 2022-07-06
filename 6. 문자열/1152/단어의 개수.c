#include <stdio.h>
#include <string.h>

int main() {
    int i, j;
    int count = 1;
    int len;
    char sentence[1000000];

    gets(sentence);
    len = strlen(sentence);

    for(i = 0; i < len; i++) {
    // 처음이나 마지막에 공백 있을 때 예외 처리
        if(sentence[i] == ' ')
            count++;
    }

    if(sentence[0] == ' ')
        count--;
    if(sentence[len-1] == ' ')
        count--;

    printf("%d", count);

    return 0;
}