//
// Created by 송지원 on 2019-11-07.
//

#include "iostream"

using namespace std;

int main() {
    int n, i;
    int dp[1000001];
    cin >> n;

    dp[1] = 0;
    dp[2] = 1;
    dp[3] = 1;
//    dp[4] = 2;

    if (n<4) {
        cout<<dp[n]<<endl;
        return 0;
    }
    for (i=4; i<=n; i++) {
        int temp, temp2;
        temp = dp[i-1] + 1;
        if (i%3==0) {
            temp2 = dp[i/3] + 1;
            temp<temp2 ? : temp=temp2;
        }
        if (i%2 == 0) {
            temp2 = dp[i/2] + 1;
            temp<temp2? : temp=temp2;
        }
        dp[i] = temp;
//        cout << "dp["<<i<<"]"<<":"<<temp<<endl;
    }
    cout<<dp[n]<<endl;
    return 0;
}