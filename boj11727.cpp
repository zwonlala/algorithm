//
// Created by 송지원 on 2019-11-07.
//

#include "iostream"

using namespace std;

int main() {
    int n, dp[1001];
    cin >> n;

    dp[1] = 1;
    dp[2] = 3;

    for (int i=3; i<=n; i++) {
        dp[i] = dp[i-1] + 2*dp[i-2];
        dp[i] %= 10007;
    }
    cout << dp[n] << endl;
    return 0;
}