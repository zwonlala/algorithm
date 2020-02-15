//
// Created by 송지원 on 2020-02-15.
//

#include <iostream>

int countR(int input, int r) {
    int r_temp = r;
    int ret = 0;

    while (input/r_temp >= 1) {
        ret += (input/r_temp);
        r_temp *= r;
    }

    return ret;
}

int main() {
    int N;
    int count2, count5;

    scanf("%d", &N);
    count2 = countR(N, 2);
    count5 = countR(N, 5);

    if (count2 < count5) {
        printf("%d\n", count2);
    } else {
        printf("%d\n", count5);
    }
    return 0;
}