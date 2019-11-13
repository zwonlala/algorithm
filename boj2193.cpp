//
// Created by 송지원 on 2019-11-13.
//

#include "iostream"

using namespace std;

int main() {
    int i,j, N;
    long long D[91][2];
    D[1][0] = 0;
    D[1][1] = 1;

    cin >> N;

    for (i=2; i<=N; i++) {
        D[i][0] = D[i-1][0] + D[i-1][1];
        D[i][1] = D[i-1][0];
    }

    cout << D[N][0] + D[N][1] << endl;
}