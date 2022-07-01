#include <stdio.h>

int OX(char* string);

int main() {
    int n;
    int i;
    int count[100];
    char string[100] = { 0, };
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        scanf("%s", string);
        count[i] = OX(string);
    }
    for(i = 0; i < n; i++) {
        printf("%d\n", count[i]);
    }
}
int OX(char* string) {
    int count = 0;
    int sum = 0;
    for(int i = 0; string[i] != NULL; i++) {
        if(string[i] == 'O') {
            count++;
            sum += count;
        }
        else if(string[i] == 'X') {
            count = 0;
        }
    }
    return sum;
}
// string이 O가 될 때, count++
// sum에 count 더하기
// string이 X가 될 때, count = 0