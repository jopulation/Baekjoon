// 크냐?
#include <stdio.h>
#define NUM 10000
void YN(int n1, int n2);

int main() {
    int i;
    int num1, num2;

    while(1) {
        scanf("%d %d", &num1, &num2);
        if(num1 == 0 && num2 == 0)
            break;
        else
            YN(num1, num2);
    }

}

void YN(int n1, int n2) {
    if(n1 > n2) 
        printf("Yes\n");
    else
        printf("No\n");
}