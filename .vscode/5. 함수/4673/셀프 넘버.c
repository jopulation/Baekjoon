#include <stdio.h>

#define LMT 10000
#define LMT_N 100

int search(int* number, int i);

int main() {
    int i, j;
    char number[LMT_N];
    int selfNumber[LMT] = { -1, };
    int nonSelfNumber[LMT] = { -1, };

    int count = 0;
    int Ncount = 0;
    int sum = 0;
    int c;

    for(i = 1; i <= LMT; i++) {

        // number 배열, sum 초기화
        number[0] = '\0';
        sum = 0;

        // NonSelfNumber에서 i가 존재하는지 확인.
        // 존재하지 않으면 selfNumber 배열에 추가, count++
        if(search(nonSelfNumber, i)) {
            selfNumber[count++] = i;
        }
        
        sprintf(number, "%d", i);
        for(j = 0; number[j] != '\0'; j++) {
            c = number[j] - '0';
            sum += c;
        }
        sum += i;

        // 중복 없이 추가
        if(search(nonSelfNumber, sum)) {
            nonSelfNumber[Ncount++] = sum;
        }
    }

    selfNumber[count++] = -5;
    for(i = 0; selfNumber[i] != -5; i++) {
        printf("%d\n", selfNumber[i]);
    }

    return 0;
}

// search 함수 구현
int search(int* number, int n) {
    int i;
    for(i = 0; number[i] != 0; i++) {
        // 존재할 때
        if(number[i] == n)
            return 0;
    }
    // 존재하지 않을 때
    return 1;
}