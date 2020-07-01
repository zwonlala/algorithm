//
// Created by 송지원 on 2020/07/01.
//

#include <iostream>
#include <stack>
using namespace std;
stack<char> S;
stack<int> N;
stack<char> O;
int val = 1;
string input;
bool valid = true;

char relationship(int idx1, int idx2) {
    char ch1 = input.at(idx1);
    char ch2 = input.at(idx2);

    if (ch1=='(' && ch2==')') return '2';
    if (ch1=='[' && ch2==']') return '3';
    if ((ch1==')'|| ch1==']') && (ch2==')'|| ch2==']')) return '*';
    if ((ch1==')'|| ch1==']') && (ch2=='('|| ch2=='[')) return '+';

}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> input;
    int len = input.length();
    for (int i=0; i<len; i++) {
        char ch = input.at(i);
        if (ch == '(') {
            S.push(ch);
        }
        else if (ch == ')') {
            if (S.top() != '('){
                valid = false;
                break;
            }
            S.pop();
            N.push(2);
        }
        else if (ch == '[') {
            S.push('[');
        }
        else if (ch == ']') {

        }
    }
}