//
// Created by 송지원 on 2019-11-07.
//

#include "iostream"

using namespace std;

int main() {
    int n, T, dp[12];

    cin >> T;
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;
    for (int i=4; i<=11; i++) {
        dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
    }

    while (T--) {
        cin >> n;
        cout << dp[n] << endl;
    }
    return 0;
}