// 설탕 배달
#include <stdio.h>

int main()
{
    int N; // 3 <= N <= 5000 N은 자연수
    int cnt = -1;
    int _3k = 0, _5k = 0;

    scanf("%d", &N);
    for (_3k; (N - _3k * 3) >= 0; _3k++)
    {
        if (((N - _3k * 3) == 0) || ((N - _3k * 3) % 5 == 0))
        {
            _5k = (N - _3k * 3) / 5;
            cnt = _3k + _5k;
            break;
        }
    }
    printf("%d\n", cnt);
    return 0;
}

/*
#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int min = (int)N/3;
    int sum = (int)N/3 + 1;
    for(int i = 0; i <= (int)(N/3); i++) {
        for(int j = 0; j <= (int)(N/5); j++) {
            if((3*i) + (5*j) == N) {
                sum = i + j;
                if(sum <= min) {
                    min = sum;
                }
            }
        }
    }
    if(sum == (int)N/3 + 1) {
        min = -1;
    }
    printf("%d", min);
    return 0;
}
*/