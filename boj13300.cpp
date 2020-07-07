//
// Created by 송지원 on 2020/07/07.
//

#include <iostream>
using namespace std;

int N, K;
int cnt;
int student[6][2];
int a, b;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> K;
    for (int i=0; i<N; i++) {
        cin >> a >> b;
        student[b-1][a]++;
    }
    for (int i=0; i<6; i++) {
        cnt += student[i][0]/K;
        cnt += student[i][1]/K;
        if (student[i][0]%K) cnt++;
        if (student[i][1]%K) cnt++;
    }
    cout << cnt;
}