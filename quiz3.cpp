//
// Created by 송지원 on 2020/06/01.
//

#include <iostream>
using namespace std;

int main() {
    long long N;
    int i=1;
    long long left, right;

    cin >> N;
    while (true) {
        left = i * i;
        right = (i+1) * (i+1);

        if (left <= N && N <= right) {
            if (N == left || N == right) {
                printf("1");
            }
            else {
                printf("0");
            }
            break;
        }
        i++;
    }
    return 0;
}