//
// Created by 송지원 on 2020-02-11.
//

#include <iostream>
#include <string>

using namespace std;

string convert8To2[8] = {"000", "001", "010", "011",
                         "100", "101", "110", "111"};

string convertFirst8To2[8] = {"Error!", "1", "10", "11",
                         "100", "101", "110", "111"};

int main() {
    string str;
    int len;

    cin >> str;
    len = str.size();

    if (str.compare("0") == 0) {
        cout << "0" << endl;
        return 0;
    }
    else {
        cout << convertFirst8To2[str[0]-'0'];

        for (int i=1; i<len; i++) {
            cout << convert8To2[str[i]-'0'];
        }
        cout << endl;
    }
    return 0;
}