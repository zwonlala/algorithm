//
// Created by 송지원 on 2019-11-20.
//

#include "iostream"
using namespace std;

int main() {
    int N, A[1001], D[1001];
    int ANS, temp, max;

    cin >> N;

    for (int i=N; i>0; i--) {
        cin >> A[i];
    }

    D[1] = 1;
    ANS = D[1];
    for (int i=2; i<=N; i++) {
        max = -1;
        for (int j=1; j<i; j++) {
            if (A[j] < A[i]) {
                temp = D[j];

                if (temp > max) max = temp;
            }
        }

        if (max != -1) D[i] = max + 1;
        else D[i] = 1;

        if (D[i] > ANS) ANS = D[i];
    }
    cout << ANS << endl;
    return 0;
}