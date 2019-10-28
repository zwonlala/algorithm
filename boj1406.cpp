//
// Created by 송지원 on 2019-10-28.
//

#include "iostream"
#include <stack>
using namespace std;

int main() {
    stack<char> left, right;
    int T, i;
//    char first, temp;
    char base[100001], input[3];

    scanf("%s", base);
    for (i=0; i<strlen(base); i++){
//        temp = base[i];
//        left.push(temp);
        left.push(base[i]);
    }

    cin >> T;
    cout << T << endl;
    while (T--) {

        if (input[0] == 'L') {
            cout << 'L' << endl;
            if (!left.empty()) {
                right.push(left.top());
                left.pop();
            }
        } else if (input[0] == 'D') {
            if (!right.empty()) {
                left.push(right.top());
                right.pop();
            }
        } else if (input[0] == 'B') {
            if (!left.empty()) {
                left.pop();
            }
        } else if (input[0] == 'P') {
            left.push(input[2]);
        }
    }

    while (!left.empty()){
        right.push(left.top());
        left.pop();
    }

    while (!right.empty()){
        cout<<right.top();
        right.pop();
    }
    return 0;

}