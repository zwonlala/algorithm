//
// Created by 송지원 on 2019-10-28.
//

#include "iostream"
#include <stack>
#include "string.h"

using namespace std;
char * result[2] = {"NO", "YES"};

int main() {
    int T, i;
    char input[51];
    cin >> T;

    while (T--) {
        stack<char> left;
        cin >> input;
        for (i=0; i<strlen(input); i++) {
            if (input[i] == '('){
                left.push('(');
            }
            else {
                if (left.size() == 0) { //)가 나왔지면 매치되는 (가 없는 경우
                    cout << result[0] << endl;
                    break;
                }
                left.pop();
            }

            if (i==strlen(input)-1) {
                if (left.size() == 0) { //문자열을 다 돌았는데 모두 쌍이 있는 경우
                    cout << result[1] << endl;
                }
                else { //문자열을 다 돌았는데 (만 남은 경우
                    cout << result[0] << endl;
                }
            }
        }
    }
    return 0;
}