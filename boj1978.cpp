//
// Created by 송지원 on 2020-02-12.
//
#include <iostream>

using namespace std;

bool isPrime(int input) {
    if (input == 1) {
        return false;
    }

    for (int i=2; i*i <= input; i++){
        if (input % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int T, N;
    int count = 0;
    cin >> T;

    while (T--) {
        cin >> N;

        if (isPrime(N)) {
            count ++;
        }
    }

    cout << count << endl;
}