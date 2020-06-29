//
// Created by 송지원 on 2020/06/29.
//

#include <iostream>
#include <queue>
#include <utility>
using namespace std;

#define X first
#define Y second

int N, M;
int board[105][105];
bool vis[105][105];
int len[105][105];
string s;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        cin >> s;
        for (int j = 0; j < M; j++) {
            board[i][j] = (int)(s.at(j) - '0');
            len[i][j] = 1000;
        }
    }

    queue<pair<int, int>> Q;
    Q.push({0, 0});
    vis[0][0] = 1;
//    int LEN = 1;
    len[0][0] = 1;


    while(!Q.empty()) {

        pair<int, int> cur = Q.front();
        int temp_len = len[cur.X][cur.Y];
        Q.pop();

        for (int dir=0; dir<4; dir++) {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];

            if (nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
            if (!board[nx][ny] || vis[nx][ny]) continue;

            Q.push({nx, ny});
            vis[nx][ny] = 1;
//            len[nx][ny] = min(len[nx][ny], temp_len+1) ;
            len[nx][ny] = temp_len+1;
        }
    }

    cout << len[N-1][M-1];
}