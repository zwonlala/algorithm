//
// Created by 송지원 on 2019-11-13.
//

#include "iostream"
#include <algorithm>

using namespace std;

int main() {
    int i, N;
    int D[10001][3] = {0, };
    int A[10001];
    int ans = 0;

    cin >> N;

    for (i=1; i<=N; i++) {
        scanf("%d", &A[i]);
    }
    D[1][0] = 0;
    D[1][1] = A[1];
    D[1][2] = 0;

    D[2][0] = A[1];
    D[2][1] = A[2];
    D[2][2] = A[1] + A[2];

    D[3][0] = max({D[2][0], D[2][1], D[2][2]});
    D[3][1] = D[2][0] + A[3];
    D[3][2] = D[2][1] + A[3];

    for (i=4; i<=N; i++) {
        D[i][0] = max( {D[i-1][0], D[i-1][1], D[i-1][2]} );
        D[i][1] = max( {D[i-2][0], D[i-2][1], D[i-2][2]} ) + A[i];
        D[i][2] = max( {D[i-3][0], D[i-3][1], D[i-3][2]} ) + A[i] + A[i-1];
    }

    ans = max({D[N][0], D[N][1], D[N][2]});
    cout << ans << endl;

    return 0;
}