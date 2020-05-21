//
// Created by 송지원 on 2020/05/21.
//

#include <cstdio>
#include <string.h>
#include <stack>
#include <deque>
using namespace std;

int make_reverse(char input[], int len) {
    stack<int> temp;
    int result = 0;

    for (int i=0; i<len; i++) {
        temp.push(input[i] - '0');
    }
    for (int i=0; i<len; i++) {
        result *= 10;
        result += temp.top();
        temp.pop();
    }
    return result;
}

void print_reverse(int input) {
    deque<int> dq;
    deque<int>::iterator iter;
    int value;

    while (input>0) {
        value = input % 10;
        dq.push_back(value);
        input /= 10;
    }

    while (dq.front() == 0) {
        dq.pop_front();
    }

    for (iter=dq.begin(); iter != dq.end(); iter++) {
        printf("%d", *iter);
    }
//    for (int i=0; i<dq.size(); i++) {
//        printf("%d", dq[i]);
//    }

    printf("\n");
}


int main() {
    int N, len1, len2;
    int input1, input2;
    char temp1[10], temp2[10];

    scanf("%d", &N);
    while (N--) {
        scanf("%s %s", temp1, temp2);
        len1 = strlen(temp1);
        len2 = strlen(temp2);
        input1 = make_reverse(temp1, len1);
        input2 = make_reverse(temp2, len2);
        print_reverse(input1 + input2);
    }
    return 0;
}