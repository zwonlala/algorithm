//
// Created by 송지원 on 2019-11-18.
//

#include "iostream"

using namespace std;

int main() {
    int i, j, N, ANS, temp, max;
    int A[1001];
    int D[1001];

    cin >> N;

    for (i=0; i<N; i++) {
        cin >> A[i+1];
        D[i+1] = 1;
    }
    ANS = -1;

    for (i=2; i<=N; i++) {
        max = -1;
        for (j=1; j<i; j++) {
            if (A[j]>A[i]) {
                temp = D[j];

                if (temp > max) max = temp;
            }
        }

        if (max!=-1) D[i] = max + 1;
        else D[i] = 1;


        if (D[i]>ANS) ANS = D[i];
    }

    cout << ANS << endl;
    return 0;
}