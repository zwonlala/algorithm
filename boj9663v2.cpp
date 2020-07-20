//
// Created by 송지원 on 2020/07/20.
//

//boj9663 문제 바킹독님 버젼! if문 안에 조건들을 ||로 묶는 것이 깔끔해보임!!
#include <iostream>
using namespace std;
bool isused1[40];
bool isused2[40];
bool isused3[40];

int cnt = 0;
int n;

void func(int cur) {
    if (cur == n) {
        cnt++;
        return;
    }
    for (int i=0; i<n; i++) {
        if (isused1[i] || isused2[i+cur] || isused3[cur-i+n-1])
            continue;

        isused1[i] = 1;
        isused2[i+cur] = 1;
        isused3[cur-i+n-1] = 1;
        func(cur+1);
        isused1[i] = 0;
        isused2[i+cur] = 0;
        isused3[cur-i+n-1] = 0;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    func(0);
    cout << cnt;
    return 0;
}