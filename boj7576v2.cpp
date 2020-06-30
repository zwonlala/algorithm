//
// Created by 송지원 on 2020/06/30.
//

//바킹독 9강 BFS boj7576 바킹독님 버젼!!

//vis 배열이 아니라 dist 배열을 사용해서 바로 거리 계산 -> 이때 조건으로

#include <iostream>
#include <queue>
#include <utility>
using namespace std;
#define X first
#define Y second

int board[1002][1002];
int dist[1002][1002]; // 이 배열에서 익지 않은 토마토를 -1로 지정.
// 그리고 기본적으로 전역으로 선언되는 int, int 배열은 0으로 초기화 되니 -1으로 지정하지 않은 부분은 모두 0!!
int n, m;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> m >> n;
    queue<pair<int, int>> Q;

    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            cin >> board[i][j];
            if (board[i][j] == 1)
                Q.push({i, j});
            if (board[i][j] == 0)
                dist[i][j] = -1;
        }
    }
    while (!Q.empty()) {
        auto cur = Q.front();
        Q.pop();
        for (int dir=0; dir<4; dir++) {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if (nx<0 || nx>=n || ny<0 || ny>=m) continue;
//            if (board[nx][ny]!=0 || dist[nx][ny]!=-1) continue;
            if (dist[nx][ny] >= 0) continue;
            dist[nx][ny] = dist[cur.X][cur.Y] + 1;
            Q.push({nx, ny});
        }
    }
    int ans = 0;
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            if (dist[i][j] == -1) {
                cout <<-1;
                return 0;
            }
            ans = max(ans, dist[i][j]);
        }
    }
    cout << ans;
}