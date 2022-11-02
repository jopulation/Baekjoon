// 오늘의 날짜는?
#include <stdio.h>
#include <time.h>

int main() {
    time_t timer = time(NULL);
    struct tm* t = localtime(&timer);

    printf("%d\n", t->tm_year + 1900);
    printf("%d\n", t->tm_mon + 1);
    printf("%d\n", t->tm_mday);

    return 0;
}