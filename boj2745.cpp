//
// Created by 송지원 on 2020-02-11.
//

#include <iostream>
#include <string.h>

using namespace std;

int main(){
    long long sum = 0;
    string str;
    int len;
    int b;

    cin >> str >> b;

    len = str.size();
    for (int i=0; i<len; i++) {
        char ch = str.at(i);
        int value = ch -'0';

        if (value > 9) {
            value = ch - 'A' + 10;
        }
        sum *= b;
        sum += value;
    }

    cout << sum << endl;
}