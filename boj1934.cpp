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
        b = a % b;
        a = r;
    }
    return a;
}

int main()
{
    int a, b, T;
    cin >> T;

    for (int i=0; i < T; i++) {
        cin >> a >> b;
        cout << a * b / gcd2(a, b) << endl;
    }
    return 0;
}