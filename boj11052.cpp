//
// Created by 송지원 on 2019-11-07.
//

#include "iostream"

#define MAX(X,Y) {(X)>(Y)? (X) : (Y)}

using namespace std;

int main() {
    int T;
    int input[1001], max[1001];
    int temp;
    cin >> T;

    for (int i=1; i<=T; i++) {
        cin >> input[i];
        max[i] = input[i];
    }

    for (int i=2; i<=T; i++) {
        int value = max[i];

        for (int j=1; j<i; j++) {
            temp = max[j] + input[i-j];
            value = MAX(value, temp);
        }
        max[i] = value;
    }

    cout << max[T] << endl;
}