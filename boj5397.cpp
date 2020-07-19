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
int strLen;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;
//    getchar();
    while (N--) {
        string str;
//        cin >> str;
        getline(cin, str);
        strLen = str.size();
        for (int i=0; i<strLen; i++) {
            ch = str[i];
//        while ((ch=getchar()) != '\n'){
            cout << "[" <<ch << "]\t";

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

//        while (!pleft.empty()) {
        int leftSize = pleft.size();
        for (int i=0; i<leftSize; i++) {
            pright.push(pleft.top());
            pleft.pop();
        }
//        while (!pright.empty()) {
        int rightSize = pright.size();
        for (int i=0; i<rightSize; i++) {
            cout << pright.top();
            pright.pop();
        }

    }
}