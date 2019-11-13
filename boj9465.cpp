//
// Created by 송지원 on 2019-11-13.
//

#include "iostream"
using namespace std;

int getmax(int i1, int i2, int i3) {
    int max = i1;
    if (i2 > max) max = i2;
    if (i3 > max) max = i3;

    return max;
}

int main() {
    int i,j, max, temp, N, T;
    int D[100001][2] = {0, };
    int A[100001][2] = {0, };
    cin >> T;

    while (T--) {
        cin >> N;
        for (i=1; i<=N; i++) {
            cin >> temp;
            A[i][0] = temp;
        }
        for (i=1; i<=N; i++) {
            cin >> temp;
            A[i][1] = temp;
        }

        D[1][0] = A[1][0];
        D[1][1] = A[1][1];

        for (i=2; i<=N; i++) {
            max = getmax(D[i-1][1], D[i-2][0], D[i-2][1]);
            D[i][0] = max + A[i][0];
            max = getmax(D[i-1][0], D[i-2][0], D[i-2][1]);
            D[i][1] = max + A[i][1];
        }

        max = D[N][0]>D[N][1]? D[N][0]: D[N][1];
        cout << max << endl;
    }
    return 0;
}