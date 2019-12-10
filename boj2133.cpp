//
// Created by 송지원 on 2019-12-06.
//

#include "iostream"
using namespace std;

int main() {
    int N;
    int D[31];

    cin >> N;

    D[0] = 1;
    D[1] = 0;
    D[2] = 3;
    D[3] = 0;
    D[4] = 3*3 + 2*1;

    if (N%2 == 1) {
        cout<< 0 << endl;
        return 0;
    }

    if (N <= 4) {
        cout << D[N] << endl;
        return 0;
    }

    for (int i=6; i<=N; i=i+2) {
        int temp = 0;
        for (int j=0; j<=i-4; j+=2) {
            temp += D[j] * 2;
        }
        temp += D[i-2] * 3;
        D[i] = temp;
    }
    cout << D[N] << endl;
    return 0;
}