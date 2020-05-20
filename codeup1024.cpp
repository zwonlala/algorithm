//
// Created by 송지원 on 2020/05/20.
//

#include <cstdio>
#include <string.h>
using namespace std;

int main() {
    char word[21];
    int len;
    scanf("%s", word);
    len = strlen(word);
    for (int i=0; i<len; i++) {
        printf("\'%c\'\n", word[i]);
    }
    return 0;
}