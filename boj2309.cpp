//
// Created by 송지원 on 2020/07/03.
//

#include <iostream>
#include <algorithm>
using namespace std;
int input[9];
int num[105];
int total;
int diff;

int main() {
    fill(num, num+105, -1);
    for (int i=0; i<9; i++) {
        cin >> input[i];
        total += input[i];
        num[input[i]] = i;
    }
    diff = total - 100;
    for (int i=0; i<9; i++) {
        if (diff-input[i] < 0) continue;
        if (input[i] == diff-input[i]) continue;
        if (num[diff-input[i]] >= 0) {
            int index1 = i;
            int index2 = num[diff-input[i]];
            input[index1] = -1;
            input[index2] = -1;
            break;
        }
    }
//    for (int i=0; i<9; i++){
//        cout << input[i]<< " ";
//    }
    sort(input, input + 9);
//    for (int i=0; i<9; i++){
//        cout << input[i]<< " ";
//    }
    for (int i=2; i<9; i++){
        cout << input[i] << "\n";
    }
}