//
// Created by 송지원 on 2020/07/06.
//

#include <iostream>
using namespace std;
int N;
int alpha_cnt[26];
char ch;
bool space = false;
int cnt;

int main() {
    cin >> N;
    getchar();
    for (int i=0; i<N; i++) {
        while ((ch = getchar()) !='\n') {
//            printf("%c ", ch);
            if (ch == ' ') {
                space = true;
                continue;
            }
            if (space) alpha_cnt[ch-'a']--;
            else alpha_cnt[ch-'a']++;
        }
//        for (int j=0; j<26; j++) {
//            cout << alpha_cnt[j] << " ";
//        }
        space = false;
        cnt = 0;
        for (int j=0; j<26; j++) {
            cnt += alpha_cnt[j]<0 ? 1 : alpha_cnt[j];
            alpha_cnt[j] = 0;
        }

        if (cnt==0) cout << "Possible\n";
        else cout << "Impossible";
    }
}