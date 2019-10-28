//
// Created by 송지원 on 2019-10-28.
//

#include "iostream"
#include <string.h>
using namespace std;

int main() {
    int T, i;
    char input[51];
    cin >> T;

    while (T--) {
        int left_cnt=0;
        cin >> input;

        for (i=0; i<strlen(input); i++) {

            if (input[i] == '(') left_cnt++; //'('이 나온 경우
            else { // ')'이 나왔는데
                if (left_cnt==0) { //짝이 맞는 '('이 없는 경우
                    cout << "NO" << endl;
                    break;
                }
                left_cnt--;
            }

            if (i==strlen(input)-1) { //문자열의 끝까지 돌았을 때
                if (left_cnt == 0) { //모든 문자가 짝이 맞다
                    cout << "YES" << endl;
                }
                else { //짝이 없는 '('이 하나 이상 있다
                    cout << "NO" << endl;
                }
            }
        }
    }
    return 0;
}
