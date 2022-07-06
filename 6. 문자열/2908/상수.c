#include <stdio.h>
#include <stdlib.h>

void swap(char num[]);

int main() {
    int i, j;
    int num1, num2;
    char num01[4];
    char num02[4];

    scanf("%d %d", &num1, &num2);
    sprintf(num01, "%d", num1);
    sprintf(num02, "%d", num2);

    swap(num01);
    swap(num02);

    num1 = atoi(num01);
    num2 = atoi(num02);

    if(num1 > num2)
        printf("%d", num1);
    else
        printf("%d", num2);
    
    return 0;
}

void swap(char num[]) {
    int temp;
    temp = num[0];
    num[0] = num[2];
    num[2] = temp;
}