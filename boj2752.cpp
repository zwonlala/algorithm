//
// Created by 송지원 on 2020/07/03.
//

#include <iostream>
#include <algorithm>
using namespace std;
int input[3];

int main() {
    for (int i=0; i<3; i++)
        cin >> input[i];

    sort(input, input+3);
    cout << input[0] << " " << input[1] << " " << input[2];
}