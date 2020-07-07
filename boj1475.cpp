//
// Created by 송지원 on 2020/07/07.
//

#include <iostream>
using namespace std;
string num;
int len;
int cntother;
int cnt69;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> num;
    len = num.size();
    for (int i=0; i<len; i++){
        if (num[i]=='6' || num[i]=='9') cnt69++;
        else cntother++;
    }
    if (cnt69%2==0) cout << cntother+cnt69/2;
    else cout << cntother+cnt69/2+1;
}