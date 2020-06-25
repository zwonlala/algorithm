//
// Created by 송지원 on 2020/06/25.
//
//200625 바킹독 4강 연결리스트 듣고 다시 푸는 문제. 시간초과나는 코드임. ㅠ

#include <iostream>
#include <list>
#include <string>

using namespace std;

list<char> l;
int len=0;
int cur;
string s;
int M;
char op;
list<char>::iterator it;

int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> s;
    for (int i=0; i<s.length(); i++) {
        l.push_back(s.c_str()[i]);
        len ++;
    }

    cur = len;
    cin >> M;
//    getline(cin, s);
    while (M--) {
//        string s2;
//        getline(cin, s2);
//        char in1, in2;
//        in1 = s2.c_str()[0];
//        in2 = s2.c_str()[2];


        cin >> op;

        switch(op) {
            case 'L':
                cur--;
                if (cur<0) { cur = 0; }
                break;
            case 'D':
                cur++;
                if (cur>len) { cur = len; }
                break;
            case 'B':
                if (cur == 0) continue;
                else {
                    it = l.begin();
                    int tmp_cur = cur - 1;
                    while (tmp_cur--) { it ++; }
                    l.erase(it);
                    cur --;
                    len --;
                }
                break;
            case 'P':
                list<char>::iterator it = l.begin();
                int tmp_cur = cur;
                while (tmp_cur--) { it ++; }
                cin >> op;
                l.insert(it, op);
//                l.insert(it, in2);
                cur ++;
                len ++;
                break;
        }
    }
    it = l.begin();
    for (it; it != l.end(); it++) {
        cout << *it;
    }
}