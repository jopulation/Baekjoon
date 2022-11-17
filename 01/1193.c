// 분수찾기
#include <stdio.h>

int numSearch(int n);
int numSum(int n);

int main() {
    int X; // 1 ≤ X ≤ 10,000,000
    int num;
    int row, col;
    int n;
    int sum;

    scanf("%d", &num);
    n = numSearch(num);
    sum = numSum(num);

    if(n%2 == 0) {
        row = 1;
        col = n;
        if(num != sum) {
            col++;
            sum++;
        }
        for(sum; sum < num; sum++) {
            row++;
            col--;
        }
    }
    else {
        row = n;
        col = 1;
        if(num != sum) {
            row++;
            sum++;
        }
        for(sum; sum < num; sum++) {
            row--;
            col++;
        }
    }
    printf("%d/%d\n", col, row);
    return 0;
}

int numSearch(int n) {
    int i;
    int num = n;
    for(i = 1; num-i >= 0; i++) {
        num -= i;

    }
    return i - 1;
}

int numSum(int n) {
    int i;
    int num = n;
    int sum = 0;
    for(i = 1; num-i >= 0; i++) {
        num -= i;
        sum += i;
    }
    return sum;
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