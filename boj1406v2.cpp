//
// Created by 송지원 on 2020/06/25.
//

//200625 바킹독 4강 강의듣고 다시 풀어보는 문제인데 시간 초과 나서 바킹독님 코드다시 쳐봄

//#include <bits/stdc++.h>
#include <iostream>
#include <list>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string init;
    cin >> init;

    list<char> L;
    for (auto c : init) L.push_back(c);
    auto cursor = L.end();
    int q;
    cin >> q;

    while (q--) {
        char op;
        cin >> op;
        if (op == 'P') {
            char add;
            cin >> add;
            L.insert(cursor, add);
        }
        else if (op == 'L') {
            if (cursor != L.begin()) cursor--;
        }
        else if (op == 'D') {
            if (cursor != L.end()) cursor++;
        }
        else {
            if (cursor != L.begin()) {
                cursor --;
                cursor = L.erase(cursor);
            }
        }
    }
    for (auto c : L) {
        cout << c;
    }
}