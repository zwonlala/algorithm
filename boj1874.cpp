//
// Created by 송지원 on 2020/09/07.
//

#include <iostream>
#include <stack>
#include <deque>
using namespace std;

int n;
int temp;
deque<int> seq = deque<int>(100000);
deque<int> ans = deque<int>(100000);
stack<int> S;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (int i=1; i<=n; i++) {
        cin >> ans[i-1];
        seq[i-1] = i;
    }



}