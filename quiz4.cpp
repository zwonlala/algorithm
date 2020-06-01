//
// Created by 송지원 on 2020/06/01.
//

#include <iostream>
using namespace std;

int main() {
    long long N;
    cin >> N;
    long long left = 1;
    long long right = 2;

    while (true) {
        if (left <= N && N < right) {
            printf("%d", left);
            break;
        }
        left *= 2;
        right *= 2;
    }
    return 0;
}