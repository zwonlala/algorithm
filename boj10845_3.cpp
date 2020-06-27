//
// Created by 송지원 on 2020/06/27.
//

//바킹독님 6강 큐 boj10845 직접 구현한 큐를 이용하는 버젼

#include <iostream>

using namespace std;

const int MAX = 10005; //여기서 그냥 "int MAX = ~" 이렇게 하면 아래 "int dat[MAX];" 구문에서 에러남
int dat[MAX];
int head = 0, tail = 0;
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
            dat[tail++] = t;
        }
        else if (s == "pop") {
            if (tail - head == 0) cout << "-1\n";
            else {
                cout << dat[head++] <<"\n";
            }
        }
        else if (s == "size") {
            cout << tail - head << "\n";
        }
        else if (s == "empty") {
            cout << (int)(bool)!(tail-head) << "\n";
            //이 부분 바킹독님은
            // cout << (head == tail) << "\n";
            // 이렇게 하심!!!
        }
        else if (s == "front") {
            if (tail-head==0) cout << "-1\n";
            else cout << dat[head] << "\n";
        }
        else if (s == "back") {
            if (tail-head==0) cout << "-1\n";
            else cout << dat[tail-1] << "\n";
        }
    }

}