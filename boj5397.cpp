//
// Created by 송지원 on 2020/07/16.
//

#include <iostream>
#include <stack>
using namespace std;
int N;
char ch;
stack<char> pleft;
stack<char> pright;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;
    getchar();
    while (N--) {
        while ((ch=getchar()) != '\n'){

            if (ch == '<') {
                if (pleft.empty()) continue;
                char temp = pleft.top();
                pleft.pop();
                pright.push(temp);
            }
            else if (ch == '>') {
                if (pright.empty()) continue;
                char temp = pright.top();
                pright.pop();
                pleft.push(temp);
            }
            else if (ch == '-') {
                if (pleft.empty()) continue;
                pleft.pop();
            }
            else {
                pleft.push(ch);
            }
        }

        while (!pleft.empty()) {
            pright.push(pleft.top());
            pleft.pop();
        }
        while (!pright.empty()) {
            cout << pright.top();
            pright.pop();
        }

    }
}