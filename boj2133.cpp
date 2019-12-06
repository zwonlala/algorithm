//
// Created by 송지원 on 2019-12-06.
//

#include "iostream"
using namespace std;

int main() {
    int N;
    int D[31];

    cin >> N;

    D[0] = 1;
    D[1] = 0;
    D[2] = 3;
    D[3] = 0;
    D[4] = 3*3 + 2*1;

    if (N%2 == 1) {
        cout<< 0 << endl;
        return 0;
    }

    for (int i=0; i<=N; i=i+2) {
        
    }
}