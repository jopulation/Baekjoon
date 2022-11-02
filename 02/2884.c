// 알람 시계
#include <stdio.h>

int main() {
    int H, M;
    int time;

    scanf("%d %d", &H, &M);
    time = H*60 + M;

    if(time < 45) {
        time += 24*60;
    }
    time -= 45;

    printf("%d %d", (time/60), (time%60) );

    return 0;
}