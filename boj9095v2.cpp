//
// Created by 송지원 on 2019-11-07.
//

#include "iostream"

using namespace std;

int dp[12];

int go (int n) {
//    if (n==1) return 1;
//    else if (n==2) return 2;
//    else if (n==3) return 4;
    if (dp[n]>0) return dp[n];

    dp[n] = go(n-1) + go(n-2) + go(n-3);
    return dp[n];
}

int main() {
    int n, T;
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;

    go(11);

    cin >> T;

    while (T--) {
        cin >> n;
        cout << dp[n] << endl;
    }
    return 0;
}