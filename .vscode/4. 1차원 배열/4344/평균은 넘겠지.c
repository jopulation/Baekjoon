#include <stdio.h>

float average(int N);

int main() {
    int i;
    int C;
    int N; // (1 <= N <= 1000, N은 정수)
    int scoreN;
    float studentAverage[2000];

    scanf("%d", &N);
    for(i = 0; i < N; i++) {
        scanf("%d", &scoreN);
        studentAverage[i] = average(scoreN);
    }

    for(i = 0; i < N; i++) {
        printf("%.3f%%\n", studentAverage[i]);
    }

    return 0;
}

float average(int N) {
    int i;
    int sum = 0;
    float average = 0;
    int score[N];
    int count = 0;

    for(i = 0; i < N; i++) {
        scanf("%d", &score[i]);
        sum += score[i];
    }
    average = sum / (float)N;
    
    for(i = 0; i < N; i++) {
        if(score[i] > average)
            count++;
    }

    return (count / (float)N)*100;
}