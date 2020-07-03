//
// Created by 송지원 on 2020/07/03.
//

#include <iostream>
#include <algorithm>
using namespace std;
int coin[3];
int diff[3];

int main() {
    cin >> coin[0] >> coin[1] >> coin[2];
    diff[0] = coin[0] - coin[1];
    diff[1] = coin[1] - coin[2];
    diff[2] = coin[2] - coin[0];
    if (diff[0] == 0 && diff[1] == 0 && diff[2] == 0) cout<<10000+1000*coin[0];
    else if (diff[0] == 0) cout << 1000+100*coin[0];
    else if (diff[1] == 0) cout << 1000+100*coin[1];
    else if (diff[2] == 0) cout << 1000+100*coin[2];
    else {
        sort(coin, coin+3);
        cout << 100*coin[2];
    }

}