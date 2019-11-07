//
// Created by 송지원 on 2019-11-07.
//

#include "iostream"

using namespace std;

int main() {
    int n, d[1000001];
    cin >> n;

    d[1] = 0;
    for (int i=2; i<=n; i++) {
        d[i] = d[i-1] + 1;
        if (i%2==0 && d[i]>d[i/2]+1) {
            d[i] = d[i/2] + 1;
        }
        if (i%3==0 && d[i]>d[i/3]+1) {
            d[i] = d[i/3] + 1;
        }
    }
    cout << d[n] << endl;
    return 0;
}