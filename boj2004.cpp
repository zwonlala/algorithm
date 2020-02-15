//
// Created by 송지원 on 2020-02-15.
//

#include <iostream>

//long long countR(long long input, int r) {
//    long long ret = 0;
//    int r_temp = r;
//
//    while (input / r_temp >= 1) {
//        ret += (input / r_temp);
////        printf("input:%lld / r:%d/ input/r:%lld\n", input, r_temp, input/r_temp);
//        r_temp *= r;
//    }
//    return ret;
//}

long long count2(long long input) {
    long long ret = 0;
    long long two = 2;

    while (input/two >= 1) {
        ret += (input/two);
        two *= 2;
    }
    return ret;
}

long long count5(long long input) {
    long long ret = 0;
    long long five = 5;

    while (input/five >= 1) {
        ret += (input/five);
        five *= 5;
    }
    return ret;
}

int main() {
    long long n, m;
    long long cnt2 = 0, cnt5 = 0;

    scanf("%lld %lld", &n, &m);
//
//    printf("%lld %lld %lld\n", countR(n, 2), countR(m, 2), countR(n-m, 2));
//    printf("%lld %lld %lld\n", countR(n, 5), countR(m, 5), countR(n-m, 5));

//    cnt2 = countR(n, 2) - countR(m, 2) - countR(n-m, 2);
//    cnt5 = countR(n, 5) - countR(m, 5) - countR(n-m, 5);

    cnt2 = count2(n) - count2(m) - count2(n-m);
    cnt5 = count5(n) - count5(m) - count5(n-m);

    if (cnt2 < cnt5) {
        printf("%lld\n", cnt2);
    }
    else {
        printf("%lld\n", cnt5);
    }

    return 0;
}