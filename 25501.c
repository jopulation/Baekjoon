// ¿Á±Õ¿« ±Õ¿Á
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int recursion(const char* s, int l, int r) {
    if (l >= r) return 1;
    else if (s[l] != s[r]) return 0;
    else return recursion(s, l + 1, r - 1);
}

int isPalindrome(const char* s) {
    return recursion(s, 0, strlen(s) - 1);
}

int count(const char* s, int l, int r, int cnt) {
    if (l >= r || s[l] != s[r]) return cnt;
    else return count(s, l + 1, r - 1, ++cnt);
}

int main() {
    int T; // 1 <= T <= 1000
    char S[1000][1001];

    scanf("%d", &T);
    getchar();

    for (int i = 0; i < T; i++) {
        gets(S[i]);
    }
    for (int i = 0; i < T; i++) {
        printf("%d %d\n", isPalindrome(S[i]), count(S[i], 0, strlen(S[i]) - 1, 1));
    }

}