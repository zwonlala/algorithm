//
// Created by 송지원 on 2020/07/06.
//

#include <iostream>
using namespace std;
int N;
int alpha_cnt[26];
char ch;
bool space = false;
bool pos;

int main() {
    cin >> N;
    getchar();
    for (int i=0; i<N; i++) {
        space = false;
        pos = true;
        fill(alpha_cnt, alpha_cnt+26, 0); //ㅠ이거 빼먹어서 틀림

        while ((ch = getchar()) !='\n') {
//            cout << "<" <<ch <<">";
            if (ch == ' ') {
                space = true;
                continue;
            }
            if (space) alpha_cnt[ch-'a']--;
            else alpha_cnt[ch-'a']++;
        }
        for (int j=0; j<26; j++) {
            if (alpha_cnt[j] != 0) {
                pos = false;
            }
        }
        if (pos) cout << "Possible\n";
        else cout << "Impossible\n";
    }
}