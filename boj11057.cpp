//
// Created by 송지원 on 2019-11-13.
//

#include "iostream"

using namespace std;
const int DIV_NUM = 10007;

long long D[1001][11];

int main () {
    long long result = 0;
    int i, j, k, N;

    for (j=0; j<=9; j++) {
        D[1][j] = 1;
    }

    cin >> N;

    for (i=2; i<=N; i++) {
        for (j=0; j<=9; j++) {
//            D[i][j] = D[i-1][j] * (10-j);
//            D[i][j] %= DIV_NUM;
            for (k=0; k<=j; k++) {
                D[i][j] += D[i-1][k];
                D[i][j] %= DIV_NUM;
            }

        }
    }

    for (j=0; j<=9; j++) {
        result += D[N][j];
        result %= DIV_NUM;
    }

    cout << result % DIV_NUM << endl;

}