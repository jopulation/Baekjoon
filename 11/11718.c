// 그대로 출력하기
#include <stdio.h>

int main()
{
    char string[101];
    while (scanf("%[^\n]s", string) != EOF)
    {
        printf("%s\n", string);
        getchar();
    }

    return 0;
}