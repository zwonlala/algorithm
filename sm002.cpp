//
// Created by 송지원 on 2020-03-14.
//

#include <iostream>

using namespace std;

int count (int input) {
    if (input == 0) {
        return -1;
    }

    int ret =0;

    while (input/10 > 0) {
        ret ++;
        input /= 10;
    }

    return ret;
}

int pow (int a, int n) {
    int ret = a;

    while (n--) {
        ret *= 10;
    }

    return ret;
}

int dp(int n, int x) {
    int ret;

    if (n>=4) {
        ret = 10 * x + 1;
        return dp(n-2, ret);
    }
    else if (n == 3) {
        ret = pow(7, count(x)+1) + x;
        return ret;
    }
    else if (n == 2) {
        ret = 10 * x + 1;
        return ret;
    }
}
int main() {
    int N;
    scanf("%d", &N);
    printf("%d\n", dp(N, 0));
    return 0;
}