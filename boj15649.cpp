//
// Created by 송지원 on 2020/07/18.
//

#include <iostream>
using namespace std;
#define MAX 8

void printSequence(bool used[], int N, int M, int cnt) {
//    cout <<"used:"<<used[0]<<"/"<<used[1]<<"/"<<used[2]<<"/"<<used[3]<<"/"<<used[4]<<"/"<<used[5]<<"/"<<used[6]<<"/"<<used[7];
//    cout << "N:"<<N<<" M:"<<M<<" cnt:"<<cnt;

    if (cnt > M) return;
    if (cnt == M) {
        cout <<"<1>";
        for (int i=0; i<N; i++) {
            if (used[i]) cout << i+1 << " ";
        }
        cout << '\n';
        return;
    }
    else {
        cout <<"<2>";

        for (int i = 0; i < N; i++) {
            if (!used[i]) {
                bool* tempUsed = used;
                tempUsed[i] = true;
                int tempCnt = cnt + 1;
                printSequence(tempUsed, N, M, tempCnt);
            }
        }
    }
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N, M;
    bool used[MAX];
    cin >> N >> M;
    fill(used, used+MAX, false);
    printSequence(used, N, M, 0);
    return 0;
}