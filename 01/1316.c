// 그룹 단어 체커
#include <stdio.h>
#include <string.h>

int checker(char *s);

int main()
{
    int N; // 1<= N <= 100 N은 자연수.
    int i;
    int cnt = 0;
    char words[101]; // 단어는 알파벳 소문자만!

    scanf("%d", &N);
    getchar();

    for (i = 0; i < N; i++)
    {
        gets(words);
        cnt += checker(words);
    }
    printf("%d\n", cnt);

    return 0;
}

int checker(char *s)
{
    int len = strlen(s);
    int alpha[26] = { 0, };
    alpha[s[0] - 'a']++;

    for (int i = 0; i < len - 1; i++)
    // len == 1 일 때의 경우는 바로 패스
    {
        if (s[i] == s[i + 1])
        {
            continue;
        }
        // s[i] != s[i + 1] 일 떄의 경우
        else if (alpha[s[i+1] - 'a'] == 1)
        {
            return 0;
        }
        alpha[s[i+1] - 'a']++;
    }
    return 1;
}