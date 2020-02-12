//
// Created by 송지원 on 2020-02-08.
//

#include <iostream>
using namespace std;

long long gcd1(long long a, long long b) {
    if (b == 0) {
        return a;
    }
    else {
        return gcd1(b, a%b);
    }
}

long long gcd2(long long a, long long b) {
    long long r;

    while (b != 0) {
        r = b;
        b = a%b;
        a = r;
    }
    return a;
}

int main() {
    int T, N;
    long long an[101];
    long long gcd = 0;

    cin >> T;

    while (T--) {
        cin >> N;
        for (int i=0; i<N; i++) {
            cin >> an[i];
        }

        for (int i=0; i<N-1; i++) {
            for (int j=i+1; j<N; j++)
            gcd += gcd2(an[i], an[j]);
        }

        cout << gcd << endl;
        gcd = 0;
    }
    return 0;
}