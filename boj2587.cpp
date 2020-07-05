//
// Created by 송지원 on 2020/07/05.
//

#include <iostream>
#include <algorithm>
using namespace std;

int num[5];
int sum;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    for (int i=0; i<5; i++) {
        cin >> num[i];
        sum += num[i];
    }
    sort(num, num+5);
    cout << sum/5 << "\n" << num[2];
}
