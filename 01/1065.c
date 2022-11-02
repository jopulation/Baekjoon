// 한수
#include <stdio.h>

int HanSu(int num);

int main() {
    int i, j;
    int N; // 1 <= N <= 1000
    int count = 0;
    int WlsHanSu[10000] = { 0, };

    scanf("%d", &N);

    for(i = 1; i <= N; i++) {
        if(HanSu(i)) {
            WlsHanSu[count++] = i;
        }
    }

    printf("%d", count);
    
    return 0;
}

int HanSu(int num) {
    int i;
    char Su[10];
    Su[0] = '\0';
    int origin = 0;
    int pattern = 0;
    int okay = 0;

    sprintf(Su, "%d", num);
    if(Su[1] != '\0') {
            origin = Su[1] - Su[0];
        }
    // 한 자리 수는 통과
    for(i = 0; Su[i+1] != '\0'; i++) {
        pattern = Su[i+1] - Su[i];
        if(origin != pattern) {
            okay = -1;
            break;
        }
    }
    if(okay == -1)
        return 0;

    return 1;
}