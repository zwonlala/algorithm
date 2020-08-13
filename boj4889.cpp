//
// Created by 송지원 on 2020/08/13.
//

#include <iostream>
#include <stack>
#include <string.h>

using namespace std;
string str;
int N;
int strlen;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    while (true) {
        N++;
        cin >> str;
        if (str[0] == '-') {
            break;
        }
        strlen = str.size();
    }
    return 0;
}