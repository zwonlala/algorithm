//
// Created by 송지원 on 2020/07/03.
//

#include <iostream>
using namespace std;

int t[22];
int N;

int Y() {
    int tot=0;
    for (int i=0; i<N; i++) {
        tot += 10*(t[i]/30+1);
    }
    return tot;
}

int M() {
    int tot=0;
    for (int i=0; i<N; i++) {
        tot += 15*(t[i]/60+1);
    }
    return tot;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0; i<N; i++) {
        cin >> t[i];
    }
    int y = Y();
    int m = M();
    if (y<m) cout << "Y " << y;
    else if (m<y) cout << "M " << m;
    else cout << "Y M " << y;
}