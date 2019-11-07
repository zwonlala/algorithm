//
// Created by 송지원 on 2019-11-07.
//

#include "iostream"

using namespace std;

int memo[100];

int fibonacci (int n) {
    if (n<= 1) {
        return n;
    }
    else {
        if (memo[n] > 0) {
            return memo[n];
        }
        memo[n] = fibonacci(n-1) + fibonacci(n-2);
        return memo[n];
    }
}

int main() {
    int i, n;

    cin >> n;

    for (i=0; i<n; i++) {
        cout << (i+1) << " " << fibonacci(i) << endl;
    }
    return 0;
}