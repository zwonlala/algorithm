//
// Created by 송지원 on 2019-10-31.
//

#include "iostream"
#include <string.h>
#include <algorithm>

using namespace std;

bool cmp (const char* s1, const char* s2) {
    if (strcmp(s1, s2) < 0) {
        return true;
    } else if (strcmp(s1, s2) == 0) { //불가능한 경우
        return true;
    } else {
        return false;
    }
}

int main () {
    int i, j, len;
    char input[1001];
    char* temp[1001];

    cin >> input;
    len = strlen(input);
    for (i=0; i<len; i++) {
        temp[i] = &input[i];
    }

    sort(temp, temp+len, cmp);

    for (i=0; i<len; i++) {
        printf("%s\n", temp[i]);
    }

    return 0;
}