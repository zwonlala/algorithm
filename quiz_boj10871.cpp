//
// Created by 송지원 on 2020/06/03.
//

#include <iostream>
using namespace std;

int main () {
    int N, X;
    int input[10000];

    cin >> N >> X;
    for (int i=0; i<N; i++) {
        cin >> input[i];
        if (input[i] < X)
            cout << input[i] << " ";
//            cout << " ";
    }


}