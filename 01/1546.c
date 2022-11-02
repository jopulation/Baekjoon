// 평균
#include <stdio.h>

float Max(float score[], int N);

int main() {
    int N; // 0 < N <= 10000
    float score[1000];
    float max;
    float sum = 0;
    float average;

    scanf("%d", &N);
    for(int i = 0; i < N; i++) {
        scanf("%f", &score[i]);
    }
    max = Max(score, N);
    for(int i = 0; i < N; i++) {
        score[i] = (score[i]/max) * 100;
        sum += score[i];
    }
    average = sum / N;
    printf("%f", average);

    return 0;
}

float Max(float score[], int N) {
    float max = score[0];
    for(int i = 0; i < N; i++) {
        if(max < score[i])
            max = score[i];
    }
    return max;
}