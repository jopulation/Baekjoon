// 문자열
#include <stdio.h>

char lastChar(char *s)
{
    int i;
    for (i = 0; s[i] != '\0'; i++)
    {
    }
    return s[i - 1];
}

int main()
{
    int T; // 1 <= T <=10
    int i, j;

    scanf("%d", &T);
    getchar();
    char Test[T][1000];
    char Answer[T][2];

    for (i = 0; i < T; i++)
    {
        gets(Test[i]);
    }
    for (i = 0; i < T; i++)
    {
        Answer[i][0] = Test[i][0];
        Answer[i][1] = lastChar(Test[i]);
        printf("%c%c\n", Answer[i][0], Answer[i][1]);
    }
    return 0;
}