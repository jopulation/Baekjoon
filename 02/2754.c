// 학점계산
#include <stdio.h>

int main() {
    char score[3];
    float num = 0.;

    gets(score); 

    if(score[0] == 'A') {
        if(score[1] == '+')
            num = 4.3;
        else if(score[1] == '0')
            num = 4.0;
        else if(score[1] == '-')
            num = 3.7;
    }

    else if(score[0] == 'B') {
        if(score[1] == '+')
            num = 3.3;
        else if(score[1] == '0')
            num = 3.0;
        else if(score[1] == '-')
            num = 2.7;
    }

    else if(score[0] == 'C') {
        if(score[1] == '+')
            num = 2.3;
        else if(score[1] == '0')
            num = 2.0;
        else if(score[1] == '-')
            num = 1.7;
    }

    else if(score[0] == 'D') {
        if(score[1] == '+')
            num = 1.3;
        else if(score[1] == '0')
            num = 1.0;
        else if(score[1] == '-')
            num = 0.7;
    }
    else if(score[0] == 'F') {
        num = 0.0;
    }

    printf("%.1f", num);

    return 0;
}