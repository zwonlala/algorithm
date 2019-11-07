//
// Created by 송지원 on 2019-11-07.
//

#include "iostream"

using namespace std;

int dp[1001];

int go (int n) {
    if (n==1) return 1;
    else if (n==2) return 3;

    if (dp[n]>0) return dp[n];

    dp[n] = go(n-1) + 2*go(n-2);
    dp[n] %= 10007;
    return dp[n];
}

int main() {
    int n;
    cin >> n;
    cout << go(n) << endl;
    return 0;
}