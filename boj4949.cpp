//
// Created by 송지원 on 2020/06/27.
//

#include <iostream>
#include <stack>
using namespace std;

stack<char> S;
string s;
char c;
bool tof = true;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    while (true) {
        tof = true;
        getline(cin, s);
        cout << s<< "::" ;
        if (s == ".") {
            cout << "yes\n";
            break;
        }

        for (auto x: s) {
            if (x=='[' || x=='(') {
                S.push(x);
//                cout << "push " << x << "\n";
            }
            else if (x==']' || x==')') {
                if (S.empty()) {
//                    cout << "<1>\n";
                    tof = false;
                    break;
                }
                else if ((x ==']' && S.top() == '[') || (x ==')' && S.top() == '(')) {
                    S.pop();
//                    cout << "pop " << x << "\n";
                    continue;
                }
                else {
//                    cout << "x : "<<x << "S.top() : " << S.top()<<"\n";
//                    cout << "<2>\n";
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