//
// Created by 송지원 on 2019-10-30.
//

#include "iostream"
#include <string.h>

int main() {
    char input[101] = {'0'};
    int res[26];
    int var = 'a';
    int i, len;

    for (i=0; i<26; i++) {
        res[i] = 0;
    }

    scanf("%s", input);
    len = strlen(input);

    for (i=0; i<len; i++) {
        res[input[i]-var]++;
    }
    for (i=0; i<26; i++) {
        printf("%d ", res[i]);
    }
    printf("\n");
    return 0;
}