//
// Created by 송지원 on 2020-01-30.
//
#include <iostream>
#include <string.h>
using namespace std;

int main() {
    int MOD = 1000000;
    int D[5001] = {1, };
    char str[5001];
    int len;

    cin >> str;
    len = strlen(str);

    for (int i=1; i<=len; i++) {
        int val1 = str[i-1] - '0';
        if (1<=val1 && val1 <= 9) {
            D[i] += D[i-1];
        }

        if (i==1) {
            continue;
        }
        int val2 = (str[i-2] - '0') * 10 + (str[i-1] - '0');
        if (10 <= val2 && val2 <= 26) {
            D[i] += D[i-2];
        }

        D[i] %= MOD;
    }

    if (str[0] == '0') {
        D[len] = 0;
    }
    cout << D[len] % MOD << endl;
}