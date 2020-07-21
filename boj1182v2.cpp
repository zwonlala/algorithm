//
// Created by 송지원 on 2020/07/21.
//

//바킹독님 코드. 어떤 수를 추가하거나 안하거나를 어떻게 구현하는가 했는데 나
// 재귀적으로 호출을 하면서 어떤 값을 더한 값으로 함수를 호출해주거나
// 현재 값 그대로 함수를 호출해주면
// 어떤 값을 더해주거나 안하거나 하는 경우의 수를 만족할 수 있다!!

#include <iostream>
using namespace std;

int n, s;
int arr[30];
int cnt = 0;

void func(int cur, int tot) {
    if (cur == n) {
        if(tot == s) cnt ++;
        return;
    }
    func(cur+1, tot);
    func(cur+1, tot+arr[cur]);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> s;
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }
    func(0 , 0);
    if (s == 0) cnt--;
    cout << cnt;
}