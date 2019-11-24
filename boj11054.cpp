//
// Created by 송지원 on 2019-11-23.
//

#include "iostream"
#include <algorithm>
using namespace std;

int main()
{
    int D[1001][2], A[1001];
    int N, ANS, temp, i, j;

    cin >> N;

    for (i=0; i<N; i++) {
        cin >> A[i+1];
    }
    D[1][0] = 1;
    D[1][1] = 1;
    D[N][0] = 1;
    D[N][1] = 1;

    for (i=1; i<=N; i++) {

        temp = D[1][0];
        for (j=1; j<i; j++){
            if (A[j]<A[i]) {
                temp = max(temp, D[j][0]+1);
            }
        }
        D[i][0] = temp;
    }

    for (i=N; i>=1; i--) {

        temp = D[N][1];
        for (j=N; j>i; j--){
            if (A[j]<A[i]) {
                temp = max(temp, D[j][1]+1);
            }
        }
        D[i][1] = temp;
    }

    ANS = D[1][0] + D[1][1]-1;
    for (i=1; i<=N; i++) {
        ANS = max(ANS, D[i][0]+D[i][1]-1);
    }
    cout << ANS << endl;
    return 0;
}