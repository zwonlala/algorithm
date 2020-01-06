//
// Created by 송지원 on 2020-01-06.
//

#include "iostream"

using namespace std;

int main() {
    int P[101];
    int N, T;
    P[1] = 1;
    P[2] = 1;
    P[3] = 1;
    P[4] = 2;
    P[5] = 2;
    P[6] = 3;

    cin >> T;

    for (int i=0; i<T; i++) {
        cin >> N;
        for (int j=7; j<=N; j++) {
            P[j] = P[j-5] + P[j-1];
        }
        cout << P[N] << endl;
    }
}