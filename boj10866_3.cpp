//
// Created by 송지원 on 2020/06/27.
//

//바킹독님 덱 강의 STL 사용하지 않고 직접 구현하는 버젼

#include <iostream>
using namespace std;

const int MAX = 10005;
int dat[2*MAX+1];
int head = MAX, tail = MAX;
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
            dat[--head] = t;
        }
        else if (s == "push_back") {
            cin >> t;
            dat[tail++] = t;
        }
        else if (s == "pop_front") {
            if (head==tail) cout << "-1\n";
            else cout << dat[head++] << "\n";
        }
        else if (s == "pop_back") {
            if (head==tail) cout << "-1\n";
            else cout << dat[--tail] << "\n";
        }
        else if (s == "size") {
            cout << (tail-head) << "\n";
        }
        else if (s == "empty") {
            cout << (head==tail) << "\n";
        }
        else if (s == "front") {
            if (head==tail) cout << "-1\n";
            else cout << dat[head] << "\n";
        }
        else {
            if (head==tail) cout << "-1\n";
            else cout << dat[tail-1] << "\n";
        }
    }
}