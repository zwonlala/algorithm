//
// Created by 송지원 on 2020-02-15.
//

#include <iostream>

int main() {
    int N;
    int five = 5;
    int num_of_five = 0;

    scanf("%d", &N);

//    while (N/five >= 1) {
//        num_of_five += (N / five);
//        five *= 5;
//    }
    num_of_five = N/5 + N/25 + N/125;

    printf("%d\n", num_of_five);
}
