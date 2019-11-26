//
// Created by 송지원 on 2019-11-25.
//

#include "iostream"

using namespace std;

int main() {
    int N, A[100001], D[100001];
    int i, max;
    cin >> N;

    for (i=1; i<=N; i++) {
        cin >> A[i];
        D[i] = A[i];
    }

    max = D[1];
    for (i=2; i<=N; i++) {
        int temp1 = D[i-1] + A[i];
        int temp2 = A[i];

        D[i] = temp1>temp2? temp1 : temp2;

        if (D[i] > max) max = D[i];
    }

    cout << max << endl;
    return 0;
}