#include <stdio.h>
#include <string.h>

int main() {
    char jh[1000];
    char dr[1000];
    int jhlen;
    int drlen;

    scanf("%s", &jh);
    jhlen = strlen(jh);

    scanf("%s", &dr);
    drlen = strlen(dr);

    if(jhlen >= drlen)
        printf("go\n");
    else
        printf("no\n");

    return 0;
}