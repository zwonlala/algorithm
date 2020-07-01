//
// Created by 송지원 on 2020/07/01.
//

//boj4179, boj4179_2로 시도해보았으나 실패해서 확인한 바킹독님 코드
//입력에서 각 종류를 다 처리해서 입력하려고 하지 말고 그냥 string 배열로 저장한 다음
//while 문 도는 과정에서 입력받은 #가 있으면 패스하는 형식으로 구현

//그리고 탈출하는 상황을 기존의 nx와 ny가 범위에서 벗어났다고 판단하는 if 문에서 사용한다는 발상!



#include <iostream>
#include <queue>
#include <utility>
using namespace std;
#define X first
#define Y second
string board[1002];
int dist1[1002][1002];
int dist2[1002][1002];
int n, m;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    for (int i=0; i<n; i++) {
        fill(dist1[i], dist1[i]+m, -1);
        fill(dist2[i], dist2[i]+m, -1);
    }
    for(int i=0; i<n; i++){
        cin >> board[i];
    }

    queue<pair<int,int>> Q1;
    queue<pair<int,int>> Q2;
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            if (board[i][j] == 'F') {
                Q1.push({i, j});
                dist1[i][j] = 0;
            }
            if (board[i][j] == 'J') {
                Q2.push({i, j});
                dist2[i][j] = 0;
            }
        }
    }

    while (!Q1.empty()) {
        auto cur = Q1.front();
        Q1.pop();
        for (int dir=0; dir<4; dir++) {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if (nx<0 || nx>=n || ny<0 || ny>=m) continue;
            if (dist1[nx][ny] >= 0 || board[nx][ny] == '#') continue;
            dist1[nx][ny] = dist1[cur.X][cur.Y] + 1;
            Q1.push({nx, ny});
        }
    }

    while (!Q2.empty()) {
        auto cur = Q2.front();
        Q2.pop();
        for (int dir=0; dir<4; dir++) {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if (nx<0 || nx>=n || ny<0 || ny>=m) {
                cout << dist2[cur.X][cur.Y]+1;
                return 0;
            }
            if (dist2[nx][ny] >= 0 || board[nx][ny] == '#') continue;
            if (dist1[nx][ny] != -1 && dist1[nx][ny] <= dist2[cur.X][cur.Y]+1) continue;
            dist2[nx][ny] = dist2[cur.X][cur.Y] + 1;
            Q2.push({nx, ny});
        }
    }
    cout << "IMPOSSIBLE";
}