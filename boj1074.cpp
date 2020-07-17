//
// Created by 송지원 on 2020/07/17.
//

#include <iostream>
using namespace std;

int N, R, C;

void func(int r, int c, int n, int CNT) {
    if (n == 1) {
        for (int i=0; i<2; i++) {
            for (int j=0; j<2; j++) {
                if (r+i == R && c+j == C) cout << CNT + 2*i + j;
//                cout <<"("<<r+i<<", "<<c+j<<") :"<<CNT + 2*i + j<<endl;
            }
        }
//        return CNxT + 4;
        return;
    }

    int m = n-1;
    int nm = 1<<m;
    func(r, c, m, CNT);
    func(r, c + nm, m, CNT + nm*nm);
    func(r + nm, c, m, CNT + 2*nm*nm);
    func(r + nm, c + nm, m, CNT + 3*nm*nm);
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> R >> C;
    func(0, 0, N, 0);
}