//
// Created by 송지원 on 2020/06/27.
//

//바킹독님 6강 큐 수업을 듣던 중 푸는 문제 boj10845. STL 사용 버젼

#include <iostream>
#include <queue>
using namespace std;

queue<int> Q;
int N;
string s;
int t;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    while (N--) {
        cin >> s;

        if (s == "push") {
            cin >> t;
            Q.push(t);
        }
        else if (s == "pop") {
            if (Q.empty()) cout << "-1\n";
            else {
                cout << Q.front() << "\n";
                Q.pop();
            }
        }
        else if (s == "size") {
            cout << Q.size() << "\n";
        }
        else if (s == "empty") {
            cout << (int)Q.empty() << "\n";
        }
        else if (s == "front") {
            if (Q.empty()) cout << "-1\n" ;
            else cout << Q.front() << "\n";
        }
        else {
            if (Q.empty()) cout << "-1\n" ;
            else cout << Q.back() << "\n";
        }
    }
}