//
// Created by 송지원 on 2020/07/04.
//

#include <iostream>
using namespace std;

int input[7];
int MIN = 100;
int SUM;

int main() {
    for (int i=0; i<7; i++) {
        cin >> input[i];
        if (input[i] % 2 == 1) {
            SUM += input[i];
            if (input[i] < MIN) MIN=input[i];
        }
    }
    if (SUM != 0) cout << SUM << "\n" << MIN;
    else cout << -1;
}