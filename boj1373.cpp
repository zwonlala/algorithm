//
// Created by 송지원 on 2020-02-11.
//

#include <iostream>
#include <string>

using namespace std;

int main () {
    string str;
    int len;
    int first;
    int sum = 0;
    int index_cnt = -1;
    char result[1000000] = {0, };

    cin >> str;
    len = str.size();
    first = len % 3;

    for (int i=0; i<first; i++) {
        sum *= 2;
        sum += (str.at(i) - '0');
    }
    if (first != 0) {
        result[++index_cnt] = sum + '0';
    }

    for (int i=first; i<len; i+=3) {
        sum = (str.at(i) - '0') * 4 + (str.at(i+1) - '0') * 2 + (str.at(i+2) - '0');
        result[++index_cnt] = sum + '0';
    }

    result[++index_cnt] = 0;
    cout << result << endl;
}