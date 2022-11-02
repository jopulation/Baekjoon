// 주사위 세 개
#include <stdio.h>

int main() {
    int A, B, C;
    int reward = 0;
    scanf("%d%d%d", &A, &B, &C);
    // 같은 눈 3개
    if(A == B && B == C) {
        reward = 10000 + A*1000;
    }
    // 같은 눈 2개
    else if(A == B || B == C || C == A) {
        if(A == B) {
            reward = 1000 + A*100;
        }
        else if(B == C) {
            reward = 1000 + B*100;
        }
        else if(C == A) {
            reward = 1000 + C*100;
        }
    }
    // 모두 다른 눈
    else {
        int max = A;
        if(max < B) {
            max = B;
        }
        if(max < C) {
            max = C;
        }
        reward = max*100;
    }

    printf("%d", reward);
    return 0;
}