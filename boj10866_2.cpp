//
// Created by 송지원 on 2020/06/27.
//

//바킹독님 덱 강의 boj10866문제 STL 사용하는 버젼

#include <iostream>
#include <deque>
using namespace std;

deque<int> DQ;
int N;
string s;
int t;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    while (N--) {
        cin >> s;

        if (s == "push_front") {
            cin >> t;
            DQ.push_front(t);
        }
        else if (s == "push_back") {
            cin >> t;
            DQ.push_back(t);
        }
        else if (s == "pop_front") {
            if (DQ.empty()) cout << "-1\n";
            else {
                cout << DQ.front() << "\n";
                DQ.pop_front();
            }
        }
        else if (s == "pop_back") {
            if (DQ.empty()) cout << "-1\n";
            else {
                cout << DQ.back() << "\n";
                DQ.pop_back();
            }
        }
        else if (s == "size") {
           cout << DQ.size() <<"\n";
        }
        else if (s == "empty") {
            cout << (int)DQ.empty() << "\n";
        }
        else if (s == "front") {
            if (DQ.empty()) cout << "-1\n";
            else {
                cout << DQ.front() << "\n";
            }
        }
        else {
            if (DQ.empty()) cout << "-1\n";
            else {
                cout << DQ.back() << "\n";
            }
        }
    }
}

