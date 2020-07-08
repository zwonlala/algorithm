//
// Created by 송지원 on 2020/07/08.
//

#include <iostream>
#include <queue>
using namespace std;
#define X first
#define T second

int N, K;
bool vis[100005];
queue<pair<int,int>> Q;
//queue<pair<int,int>> Q2;
int ANS_TIME;
int ANS_WAY;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> K;
    fill(vis, vis + 100005, false);
    Q.push({N, 0});
    vis[N] = true;

    while (!Q.empty()) {
        auto cur = Q.front();
        Q.pop();

        if (cur.X-1 == K || cur.X+1 == K || cur.X*2 == K) ANS_WAY++;
        else if (cur.X == K) {
            ANS_TIME = cur.T;
            break;
        }

        for (int i = 0; i < 3; i++) {
            int nx;
            if (i == 0) nx = cur.X - 1;
            else if (i == 1) nx = cur.X + 1;
            else nx = cur.X * 2;

            if (nx<0 || nx>100005) continue;
            if (vis[nx]) continue;

            vis[nx] = true;
            Q.push({nx, cur.T + 1});

//            Q2.push({nx, cur.T + 1});
        }
    }

//    while (!Q2.empty()) {
//        auto cur = Q2.front();
////        cout << cur.X << " " << cur.T << endl;
//        if (cur.T < ANS_TIME - 1) Q2.pop();
//        else if (cur.T == ANS_TIME - 1) {
//            if (cur.X + 1 == K) ANS_WAY++;
//            if (cur.X - 1 == K) ANS_WAY++;
//            if (cur.X * 2 == K) ANS_WAY++;
//            Q2.pop();
//        } else break;
//    }
    cout << ANS_TIME << "\n" << ANS_WAY;
    return 0;
}