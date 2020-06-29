//
// Created by 송지원 on 2020/06/29.
//

//바킹독 9강 BFS. boj2178 바킹독님 버젼

//여기서 굳이 vis 배열을 쓰지 않고 dist 배열을 -1로 초기화 해놓고 -1이면 방문하지 않았던 곳, -1이 아니면 방문한 곳 이렇게 구분!

//그리고 board를 "string board[102];"로 정의하면 굳이 귀찮은 ㅇ일 안하고 이전코드처럼 쓸 수 있음!
//-> 다만 값 비교할때 숫자가 아니라 문자임을 주의!!

//fill 함수 사용법 : fill(dist[i], dist[i]+m, -1);

#include <iostream>
#include <queue>
#include <utility>
using namespace std;
#define X first
#define Y second

string board[102];
int dist[102][102];
int n, m;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    for (int i=0; i<n; i++)
        cin >> board[i];

    for (int i=0; i<n; i++)
        fill(dist[i], dist[i]+m, -1);

    queue<pair<int, int>> Q;
    Q.push({0, 0});
    dist[0][0] = 0;

    while (!Q.empty()) {
        auto cur = Q.front();
        Q.pop();
        for (int dir=0; dir<4; dir++) {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
            if (board[nx][ny]=='0' || dist[nx][ny] != -1) continue;

            Q.push({nx, ny});
            dist[nx][ny] = dist[cur.X][cur.Y] + 1;
        }
    }
    cout << dist[n-1][m-1] + 1;
}