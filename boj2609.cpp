//
// Created by 송지원 on 2020-02-08.
//

#include <iostream>
using namespace std;

int gcd1(int a, int b) {
    if (b == 0) {
        return a;
    }
    else {
        return gcd1(b, a%b);
    }
}

int gcd2(int a, int b) {
    int r;
    while (b != 0) {
        r = b;
        b = a%b;
        a = r;
    }
    return a;
}

int main() {
    int a, b;
    int gcd, lcm;
    cin >> a >> b;
    gcd = gcd2(a, b);
    lcm = a * b / gcd;

    cout << gcd << endl << lcm << endl;
}