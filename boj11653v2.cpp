//
// Created by 송지원 on 2020-02-13.
//

#include <iostream>

int main() {
    int N;
    int prime_int = 2;
    scanf("%d", &N);

//    if (N == 1) {
//        printf("1\n");
//        return 0;
//    }

    while (N != 1) {
        if (N % prime_int == 0) {
            printf("%d\n", prime_int);
            N /= prime_int;
        }
        else {
            prime_int++;
        }
    }
    return 0;
}