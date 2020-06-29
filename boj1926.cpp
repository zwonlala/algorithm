//
// Created by 송지원 on 2020/06/29.
//

//바킹독 9강 BFS boj1926

#include <iostream>
#include <queue>
#include <utility>
using namespace std;

#define X first
#define Y second

int N, M;
int dat[502][502];
bool vis[502][502];
int CNT = 0;
int MAX = -1;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for(int i=0; i<N; i++) {
        for (int j=0; j<M; j++) {
            cin >> dat[i][j];
        }
    }

    for(int i=0; i<N; i++) {
        for (int j=0; j<M; j++) {
            int temp_cnt;
            if (dat[i][j] && vis[i][j]==0) {
                queue<pair<int, int>> Q;
//                pair<int, int> cur;
                vis[i][j] = 1;
                Q.push({i, j});
                temp_cnt = 1;

                while (!Q.empty()) {
                    pair<int, int> cur = Q.front();
                    Q.pop();

                    for (int dir=0; dir<4; dir++) {
                        int nx = cur.X + dx[dir];
                        int ny = cur.Y + dy[dir];

                        if (nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
                        if (vis[nx][ny] || dat[nx][ny] != 1) continue;

                        temp_cnt++;
                        vis[nx][ny] = 1;
                        Q.push({nx, ny});
                    }
                }
                if (temp_cnt > MAX) MAX = temp_cnt;
                CNT ++;
            }
        }
    }

    if (CNT == 0) MAX = 0;
    cout << CNT << "\n" << MAX;
}