// 크로아티아 알파벳
#include <stdio.h>
#include <string.h>

int main() {
    int i, j;
    int len;
    int count = 0;
    char words[200];

    words[0] = '\0';

    gets(words);
    len = strlen(words);

    for(i = 0; i < len; i++) {
        switch (words[i]) {
        case 'c':
            if(words[i+1] == '=' || words[i+1] == '-') {
                i++;
            }
            count++;
            break;
        
        case 'd':
            if(words[i+1] == 'z' && words[i+2] == '=') {
                i += 2;
            }
            else if(words[i+1] == '-') {
                i++;
            }
            count++;
            break;
        
        case 'l':
            if(words[i+1] == 'j') {
                i++;
            }
            count++;
            break;
        
        case 'n':
            if(words[i+1] == 'j') {
                i++;
            }
            count++;
            break;
        
        case 's':
            if(words[i+1] == '=') {
                i++;
            }
            count++;
            break;

        case 'z':
            if(words[i+1] == '=') {
                i++;
            }
            count++;
            break;
        
        default:
            count++;
            break;
        }
    }

    printf("%d", count);

    return 0;
}