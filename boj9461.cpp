//
// Created by 송지원 on 2020-01-06.
//

#include <iostream>

using namespace std;

int main(){
    int T;
    long long P[101] = {0, 1, 1, 1, };
    int N;

    cin >> T;
    for (int i=0; i<T; i++) {
        cin >> N;

        for (int j = 4; j <= N; j++) {
            P[j] = P[j-2] + P[j-3];
        }

        cout << P[N] << endl;
    }

    return 0;
}