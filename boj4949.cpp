//
// Created by 송지원 on 2020/06/27.
//

#include <iostream>
#include <stack>
using namespace std;

string s;
char c;
bool tof = true;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    while (true) {
        tof = true;
        getline(cin, s);
        if (s == ".") {
            break;
        }

        stack<char> S;
        for (auto x: s) {
            if (x=='[' || x=='(') {
                S.push(x);
            }
            else if (x==']' || x==')') {
                if (S.empty()) {
                    tof = false;
                    break;
                }
                else if ((x ==']' && S.top() == '[') || (x ==')' && S.top() == '(')) {
                    S.pop();
                    continue;
                }
                else {
                    tof = false;
                    break;
                }
            }
        }

        if (!S.empty())
            tof = false;

        if (tof) cout << "yes\n";
        else cout << "no\n";
    }
}