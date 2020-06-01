//
// Created by 송지원 on 2020/06/01.
//

#include <iostream>

int N;

int main() {
    scanf("%d", &N);
    int three = 3, five = 5, fifteen = 15;
    int sum = 0;

    for (int i=three; i<=N; i+=3) {
        sum += i;
    }
    for (int i=five; i<=N; i+=5) {
        sum += i;
    }
    for (int i=fifteen; i<=N; i+=15) {
        sum -= i;
    }
    printf("%d", sum);
}