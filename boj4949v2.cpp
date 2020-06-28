//
// Created by 송지원 on 2020/06/28.
//

//바킹독님 8강 boj4949문제 바킹독님 버젼.

//#include <bits/stdc++.h>
#include <iostream>
#include <stack>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    while (true) {
        string a;
        getline(cin, a);
        if (a == ".") break;

        stack<char> s;
        bool isValid = true;

        for (auto c : a) {
            if (c == '(' || c == '[') s.push(c);
            else if (c == ')') {
                if (s.empty() || s.top() != '('){
                    isValid = false;
                    break;
                }
                s.pop();
            }
            else if (c == ']') {
                if (s.empty() || s.top() != '[') {
                    isValid = false;
                    break;
                }
                s.pop();
            }
        }
        if (!s.empty()) isValid = false;

        if (isValid) cout << "yes\n";
        else cout << "no\n";
    }
}