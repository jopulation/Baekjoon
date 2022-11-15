// 벌집
#include <stdio.h>

int main()
{
    int N; // 1 <= N <= 1,000,000,000, N은 자연수
    int i;
    int cnt = 2;

    scanf("%d", &N);
    
    if(N == 1) {
        printf("1\n");
        return 0;
    }
    N--;
    for(i = 0; (N - 6*i) > 6*(i+1); i++) {
        cnt++;
        N -= 6*i;
    }
    printf("%d\n", cnt);

    return 0;
}

/*
1 : 1
2 : 6
3 : 12
4 : 18
5 : 24
*/