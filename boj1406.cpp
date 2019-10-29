//
// Created by 송지원 on 2019-10-28.
//

#include "iostream"
#include "string.h"
#include <stack>
using namespace std;

int main() {
    stack<char> left, right;
    int T, i;
    char base[600000];

    scanf("%s", base);
//    for (i=0; i<strlen(base); i++){
//        left.push(base[i]);
//    }
    for (i=0; base[i]; i++){
        left.push(base[i]);
    }

    scanf("%d", &T);
    while (T--) {
        char command;
        scanf(" %c", &command);

        if (command == 'L') {
            if (!left.empty()) {
                right.push(left.top());
                left.pop();
            }
        } else if (command == 'D') {
            if (!right.empty()) {
                left.push(right.top());
                right.pop();
            }
        } else if (command == 'B') {
            if (!left.empty()) {
                left.pop();
            }
        } else if (command == 'P') {
            char c;
            scanf(" %c", &c);
            left.push(c);
        }
    }

    while (!left.empty()){
        right.push(left.top());
        left.pop();
    }

    while (!right.empty()){
        printf("%c", right.top());
        right.pop();
    }
    printf("\n");
    return 0;
}