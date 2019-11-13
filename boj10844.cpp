//
// Created by 송지원 on 2019-11-12.
//

#include "iostream"

using namespace std;

const long long DIV_NUM = 1000000000;

int main() {
    int N, i,j;
    long long temp = 0;
    long long res[101][11];

    res[1][0] = 0;
    for (j=1; j<=9; j++) {
        res[1][j] = 1;
    }

    cin >> N;

    for (i=2; i<=N; i++) {
        res[i][0] = res[i-1][1] % DIV_NUM;
        res[i][9] = res[i-1][8] % DIV_NUM;

        for (j=1; j<=8; j++) {
            res[i][j] = res[i-1][j-1] + res[i-1][j+1];
            res[i][j] %= DIV_NUM;
        }
    }

    for (j=0; j<=9; j++) {
        temp += res[N][j];
    }
    cout << temp%DIV_NUM << endl;
    return 0;
}