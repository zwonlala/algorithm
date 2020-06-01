//
// Created by 송지원 on 2020/06/01.
//

#include <iostream>
using namespace std;

int func4(int N) {
    int val = 1;
    while (2*val <= N) val *= 2;
    return val;
}

int main() {
    int N;
    cin >> N;
    printf("%d", func4(N));
    return 0;
}