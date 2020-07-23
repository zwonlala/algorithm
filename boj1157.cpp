//
// Created by 송지원 on 2020/07/23.
//

#include <iostream>
#include <algorithm>
using namespace std;

int alphaCnt [26];
char ch;
string word;
int wordLen;
int maxVal;
int maxIdx;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> word;
    wordLen = word.length();

    for (int i=0; i<wordLen; i++) {
        ch = word[i];
        if (ch >= 'a' && ch <= 'z') {
            alphaCnt[ch-'a']++;
            if (alphaCnt[ch-'a'] > maxVal) {
                maxVal = alphaCnt[ch-'a'];
                maxIdx = ch-'a';
            }
        }
        if (ch >= 'A' && ch <= 'Z') {
            alphaCnt[ch-'A']++;
            if (alphaCnt[ch-'A'] > maxVal) {
                maxVal = alphaCnt[ch-'A'];
                maxIdx = ch-'A';
            }
        }
    }
    sort(alphaCnt, alphaCnt+26);
    if (alphaCnt[24] == maxVal)
        cout << "?";
    else
        cout << (char)('A'+maxIdx);
}