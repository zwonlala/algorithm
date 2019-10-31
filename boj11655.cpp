//
// Created by 송지원 on 2019-10-31.

#include "iostream"
#include <string.h>

using namespace std;

int main () {
    char input[101];
    int ch;
    int i, len;
    cin.getline(input, 101);
    len = strlen(input);

    for (i=0; i<len; i++) {
        ch = input[i];

        if ((ch-'A') * (ch-'M') <= 0)      ch += 13;
        else if ((ch-'a') * (ch-'m') <= 0) ch += 13;
        else if ((ch-'N') * (ch-'Z') <= 0) ch = ch + 12 - 'Z' + 'A';
        else if ((ch-'n') * (ch-'z') <= 0) ch = ch + 12 - 'z' + 'a';
        printf("%c", ch);
    }
    return 0;
}
