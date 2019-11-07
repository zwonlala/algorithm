//
// Created by 송지원 on 2019-11-07.
//

#include "iostream"

using namespace std;

int dp[1000001];

int go(int n) {
    if (n<4) return dp[n];

    if (dp[n]>0) return dp[n];

    dp[n] = go(n-1) + 1;

    if (n%3==0) {
//        if (go(n/3)+1 < dp[n]) dp[n] = dp[n/3]+1;
        if (dp[n/3]+1 < dp[n]) dp[n] = dp[n/3]+1;

    }
    if (n%2==0){
//        if (go(n/2)+1 < dp[n]) dp[n] = dp[n/2]+1;
        if (dp[n/2]+1 < dp[n]) dp[n] = dp[n/2]+1;

    }
    return dp[n];
}

int main() {
    int n;
    cin >> n;

    dp[1] = 0;
    dp[2] = 1;
    dp[3] = 1;

    cout << go(n) << endl;
    return 0;
}