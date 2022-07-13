#include <stdio.h>
#include <string.h>

int Count(char word[]);
int Check(char arr[], int w);

int main() {
    int i;
    int count = 0;
    int N;

    char words[100][101];

    scanf("%d", &N);

    for(i = 0; i < N; i++) {
        scanf("%s", &words[i]);
        count += Count(words[i]);
    }

    printf("%d\n", count);

    return 0;
}

int Count(char word[]) {
    int i, j;
    int len = strlen(word);
    int count = 0;
    char alpha[26];

    alpha[count] = word[0];
    
    for(i = 1; i < len; i++) {
        if(alpha[count] != word[i]) {
            if(Check(alpha, word[i]))
                return 0;
            else
                alpha[++count] = word[i];
        }
    }

    for(j = 0; alpha[j] != '\0'; j++) {
        alpha[j] = '\0';
    }

    return 1;
}

int Check(char arr[], int w) {
    int i;
    int len = strlen(arr);
    for(i = 0; i < len; i++) {
        if(arr[i] == w) {
            return 1;
        }
    }
    return 0;
}

// 도영아 사랑해