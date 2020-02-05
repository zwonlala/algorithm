//
// Created by 송지원 on 2019-12-26.
//

#include <iostream>

using namespace std;

int main() {
    int N;
    int D[100001] = {0, 1, };

    cin >> N;

    for (int i=1; i<=N; i++) {

        D[i] = i; //D[i]'s max value.

        for (int j=1; j*j<=i; j++) {
            int temp_D = D[i-j*j] + 1;

            if (temp_D < D[i]) {
                D[i] = temp_D;
            }
        }
    }

    cout << D[N] << endl;
    return 0;
}