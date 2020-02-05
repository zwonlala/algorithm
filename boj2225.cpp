//
// Created by 송지원 on 2020-01-24.
//

#include <iostream>
using namespace std;

int main()
{
    int N, K;
    long long mod = 1000000000;
    long long d[201][201] = {0, };

    cin >> N >> K;

    for (int n=0; n <= N; n++) {
        d[1][n] = 1;
    }

    for (int k=2; k<=K; k++) {
        for (int n=0; n<=N; n++) {
            for (int l=0; l<=n; l++) {
                d[k][n] += d[k-1][l];
            }
            d[k][n] %= mod;
        }
    }

    cout << d[K][N] % mod;
    return 0;
}