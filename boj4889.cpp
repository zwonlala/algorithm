//
// Created by 송지원 on 2020/08/13.
//

#include <iostream>
#include <stack>
#include <string>

using namespace std;

string str;
int N;
int strLen;
int CNT;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    while (true) {
        stack<char> S;
        N++;
        CNT = 0;
        cin >> str;
        if (str[0] == '-') {
            break;
        }
        strLen = str.size();
        for (int i=0; i<strLen; i++) {
            char ch = str[i];
            if (ch == '{'){
                S.push('{');
            }
            else {
                if (S.size() == 0) {
                    CNT ++;
                    S.push('{');
                }
                else S.pop();
            }
        }
        if (S.size() > 0) {
            CNT += (S.size())/2;
        }
        cout << N <<". " << CNT << "\n";
    }
    return 0;
}