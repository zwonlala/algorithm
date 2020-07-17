//
// Created by 송지원 on 2020/07/17.
//

#include <iostream>
using namespace std;
long long A, B, C;

long long res(long long ans, long long a, long long b, long long c) {
    if (b==0) cout << a % c;

    return res(ans*a%c, a, b-1, c);
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> A >> B >> C;
    res(1, A, B, C);
    return 0;
}