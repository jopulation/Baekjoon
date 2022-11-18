// 분수찾기
#include <stdio.h>

int numSearch(int n);

int main()
{
    int X; // 1 ≤ X ≤ 10,000,000
    int row, col;
    int n;
    int sum;
    int tmp;

    scanf("%d", &X);
    n = numSearch(X);
    sum = n * (n + 1) / 2;

    row = n;
    col = 1;
    if (X != sum)
    {
        row++;
        sum++;
        row -= (X - sum);
        col += (X - sum);
    }
    if (n % 2 == 0)
    {
        tmp = row;
        row = col;
        col = tmp;
    }
    printf("%d/%d\n", col, row);

    return 0;
}

int numSearch(int n)
{
    int i;
    int num = n;
    for (i = 1; num - i >= 0; i++)
    {
        num -= i;
    }
    return i - 1;
}
// 규칙 찾기
/*
1  2  6  7  15 16 28
3  5  8  14 17 27
4  9  13 18 26
10 12 19 25
11 20 24
21 23
22
*/