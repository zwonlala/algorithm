//
// Created by 송지원 on 2019-12-26.
//

#include "iostream"
#include <cmath>

using namespace std;

int D (int N) {
    int sqrt_N;
    int diff;

    if (N == 0) {
        return 0;
    }

    if (N == 1) {
        return 1;
    }
    sqrt_N = (int) sqrt(1.0 * N);
    diff = N - sqrt_N * sqrt_N;

    return 1 + D(diff);
}

int main() {
    int N;

    cin >> N;
    cout << D(N) << endl;
}