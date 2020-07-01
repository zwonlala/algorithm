//
// Created by 송지원 on 2020/06/30.
//

//이전에 시도한 버젼이 메모리 초과가 나서 바킹독님 강의에서 말씀하신
// 불 BFS 먼저 구하고 그 다음 사람 BFS 구하는 방식으로 구현!!
//힌트 좀 받고 풀어봤는데 스파게티 되어서 GG


#include <iostream>
#include <queue>
#include <utility>
using namespace std;
#define X first
#define Y second
int N, M;
int box[1002][1002];
int dist[1002][1002];
int dist2[1002][1002];

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
char input;
queue<pair<int, int>> Q;
queue<pair<int, int>> Qfire;
int escape_time = 0;

void fire_BFS() {
    while (!Qfire.empty()) {
        auto cur = Qfire.front();
        Qfire.pop();
//        cout <<"\n\n"<<cur.X << " " << cur.Y<<"     ";

        for (int dir=0; dir<4; dir++) {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];

            if (nx<0 || nx >= N || ny<0 || ny>=M) continue;
            if (box[nx][ny] == -1 || dist[nx][ny] > 0) continue;

//            cout <<"["<<nx <<", "<<ny<<"]\t";

            dist[nx][ny] = dist[cur.X][cur.Y] + 1;
            Qfire.push({nx, ny});
        }
    }
}

void escape_BFS() {
    bool alive = false;

    while (!Q.empty()) {
        auto cur = Q.front();
        Q.pop();

        if (cur.X==0 || cur.X==N-1 || cur.Y==0 || cur.Y==M-1){
            alive = true;
            break;
        }

        for (int dir=0; dir<4; dir++) {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if (nx<0 || nx >= N || ny<0 || ny>=M) continue;
            if (box[nx][ny] == -1 || dist2[nx][ny] != 0) continue;

            dist2[nx][ny] = dist2[cur.X][cur.Y]+1;
            if (dist2[nx][ny] >= dist[nx][ny]) {
                dist2[nx][ny] *= -1;
                continue;
            }
            Q.push({nx, ny});
            escape_time = max(escape_time, dist2[nx][ny]);
        }
    }
    if (alive) cout << escape_time;
    else cout << "IMPOSSIBLE";
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (int i=0; i<N; i++) {
        for (int j=0; j<M; j++) {
            cin >> input;
            if (input == '#') {
                box[i][j] = -1;
            }
            else if (input == '.') {
                dist2[i][j] = -1;
            }
            else if (input == 'J') {
                Q.push({i, j});
            }
            else if (input == 'F') {
                Qfire.push({i, j});
            }
        }
    }

    fire_BFS();
    escape_BFS();
}