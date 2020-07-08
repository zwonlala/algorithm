//
// Created by 송지원 on 2020/07/08.
//

#include <iostream>
using namespace std;
int alp1[26];
int alp2[26];
string str;
int len;
int CNT;
int minVal;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> str;
    len = str.length();
    for (int i=0; i<len; i++) {
        alp1[str[i] - 'a'] ++;
    }
    cin >> str;
    len = str.length();
    for (int i=0; i<len; i++) {
        alp2[str[i] - 'a'] ++;
    }
    for (int i=0; i<26; i++) {
        CNT += max(alp1[i], alp2[i]) - min(alp1[i], alp2[i]);
    }
    cout << CNT;
}