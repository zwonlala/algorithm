//
// Created by 송지원 on 2019-11-22.
//

#include "iostream"
using namespace std;

int main() {
    int A[1001], D[1001], N, ANS;
    int i, j, temp, max, sum;

    cin >> N;

    for (i=0; i<N; i++) {
        cin >> A[i+1];
        //?
    }

    D[1] = A[1];

    for (i=1; i<=N; i++) {
        temp = -1;
        for (j=1; j<i; j++) {

            if (A[j] < A[i]) {
                if (D[j] > temp) temp = D[j];
            }
        }
        if (temp != -1) temp += A[i];
        else temp = A[i];

        D[i] = temp;
    }

    ANS = D[1];
    for (i=1; i<=N; i++) {
        if (D[i]>ANS) ANS = D[i];
    }
    cout << ANS << endl;
    return 0;
}