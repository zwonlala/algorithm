//
// Created by 송지원 on 2020/06/25.
//

//200625 boj10828 문제 바킹독 님 버젼
//난 입력으로 들오오는 명령어를 위에 배열로 선언하고 그걸 활용하여 입력을 구분했는데
//그것보다는 아래 코드 내에서 직접 사용해서 구현

//#include <bits/stdc++.h>
#include <iostream>
#include <stack>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    stack<int> S;
    while (n--) {
        string c;
        cin >> c;
        if (c == "push") {
            int t;
            cin >> t;
            S.push(t);
        }
        else if (c == "pop") {
            if (S.empty()) {
                cout << "-1" << '\n';
            } else {
                cout << S.top() << "\n";
                S.pop();
            }
        }
        else if (c == "size") {
            cout << S.size() << "\n";
        }
        else if (c == "empty") {
            cout << (int)S.empty() << "\n";
        }
        else {
            if (S.empty())
                cout << "-1" << "\n";
            else
                cout << S.top() << "\n";
        }
    }
}