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
        res[i] = -1;
    }

    scanf("%s", input);
    len = strlen(input);

    for (i=0; i<len; i++) {
        if (res[input[i]-var]==-1){
            res[input[i]-var] = i;
        }
    }
    for (i=0; i<26; i++) {
        printf("%d ", res[i]);
    }
    printf("\n");
    return 0;
}