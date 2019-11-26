//
// Created by 송지원 on 2019-11-25.
//

#include "iostream"
#include "algorithm"
using namespace std;

int main() {
    int N, ANS, A[301], D[301][3];

    cin >> N;

    for (int i=0; i<N; i++) {
        cin >> A[i+1];
    }
    D[1][1] = A[1];
    D[1][2] = A[1];
    D[2][1] = A[2];
    D[2][2] = A[1]+A[2];
    D[3][1] = A[1]+A[3];
    D[3][2] = A[2]+A[3];

    for (int i=4; i<=N; i++){
        D[i][1] = max(D[i-2][1], D[i-2][2]) + A[i];

        D[i][2] = max(D[i-3][1], D[i-3][2]) + A[i-1] + A[i];
    }

    ANS = (D[N][1] > D[N][2])? D[N][1] : D[N][2];
    cout << ANS << endl;
    return 0;
}