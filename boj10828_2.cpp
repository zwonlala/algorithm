//
// Created by 송지원 on 2020/06/25.
//

//200625 바킹독 강의 들으면서 다시 푸는 boj10828 문제

//처음 제출할때, 11라인에 있는 "#include <string.h>"를 "#include <string>"라고 작성해서 컴파일에러 남ㅜㅠ 다음부턴 .h 빼먹지 않기!!!

#include <iostream>
#include <stack>
#include <string.h>
using namespace std;

int N;
char* op[5] = {"push", "pop", "size", "empty", "top"};
int OP_SIZE = 5;
stack<int> S;
string input;
int num;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;
    while (N--) {
        cin >> input;
        if (strcmp(input.c_str(), op[0]) == 0) {
            cin >> num;
            S.push(num);
        }
        else if (strcmp(input.c_str(), op[1]) == 0) {
            if (S.empty()) { cout << "-1\n"; }
            else {
                cout << S.top() << "\n";
                S.pop();
            }
        }
        else if (strcmp(input.c_str(), op[2]) == 0) {
            cout << S.size() << "\n";
        }
        else if (strcmp(input.c_str(), op[3]) == 0) {
            if (S.empty()) { cout << "1\n"; }
            else { cout << "0\n"; }
        }
        else if (strcmp(input.c_str(), op[4]) == 0) {
            if (S.empty()) { cout << "-1\n"; }
            else { cout << S.top() << "\n"; }
        }
    }
}