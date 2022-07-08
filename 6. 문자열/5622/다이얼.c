#include <stdio.h>
#include <string.h>

int main() {
    int i, j, k;
    int str = 'A';
    int len;
    int sum = 0;

    int dial[11][6];
    char words[16]; // 2 <= word <= 15

    // 다이얼 저장
    dial[0][0] = '\0';
    for(i = 2; i <= 9; i++) {
        for(j = 0; j < 3; j++) {
            dial[i][j] = str++;
        }
        if((i == 7) || (i == 9)) {
            dial[i][3] = str++;
        }
        dial[i][4] = i + 1;
    }

    // for(i = 2; i <= 9; i++) {
    //     printf("%d\n", dial[i][4]);
    // }

    words[0] = '\0';
    gets(words);
    len = strlen(words);

    for(i = 0; i < len; i++) {
        for(j = 2; j <= 9; j++) {
            for(k = 0; k < 4; k++) {
                if(words[i] == (char)dial[j][k]) {
                    sum += dial[j][4];
                    break;
                }
            }
        }
    }

    printf("%d", sum);

    return 0;
}