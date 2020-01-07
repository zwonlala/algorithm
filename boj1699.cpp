//
// Created by 송지원 on 2019-12-26.
//

#include "iostream"

using namespace std;

int main() {
    int i, N;
    int D[100001] = {0, };

    D[1] = 1;
    D[2] = 2;

    cin >> N;

    for (int i = 3; i <= N; i++) {

        D[i] = i;

        for (int j=1; j * j <= i; j++) {

            if (D[i-j*j] + 1 < D[i]) {
                D[i] = D[i-j*j] + 1;
            }
        }
    }

    cout << D[N] << endl;
}