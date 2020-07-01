//
// Created by 송지원 on 2020/07/01.
//

#include <iostream>
#include <queue>
#include <utility>
using namespace std;

int d[3] = { -1, +1, 0};
int vis[100002];
int N, K;
queue<pair<int,int>> Q;
pair<int,int> cur;
int nd;

int main() {
    cin >> N >> K;
    Q.push({N, 0});
    vis[N] = 1;
    while (true) {
        cur = Q.front();
        if (cur.first == K){
            cout << cur.second;
            return 0;
        }
        Q.pop();

        for (int dir=0; dir<3; dir++) {
            nd = cur.first + d[dir];
            if (dir==2) nd *= 2;

            if (nd < 0 || nd > 100000) continue;
            if (vis[nd] != 0) continue;

            vis[nd] = 1;
            Q.push({nd, cur.second+1});
        }
    }
}