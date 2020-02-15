//
// Created by 송지원 on 2020-02-15.
//

#include <iostream>

long long countR(long long input, long long r) {
    long long ret = 0;
    long long r_temp = r;

    while (input / r_temp >= 1LL) {
        ret += (input / r_temp);
        r_temp *= r;
    }
    return ret;
}

int main() {
    long long n, m;
    long long cnt2 = 0, cnt5 = 0;

    scanf("%lld %lld", &n, &m);

    cnt2 = countR(n, 2LL) - countR(m, 2LL) - countR(n-m, 2LL);
    cnt5 = countR(n, 5LL) - countR(m, 5LL) - countR(n-m, 5LL);

    if (cnt2 < cnt5) {
        printf("%lld\n", cnt2);
    }
    else {
        printf("%lld\n", cnt5);
    }

    return 0;
}