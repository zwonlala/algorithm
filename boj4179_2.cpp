//
// Created by 송지원 on 2020/06/30.
//

//이전에 시도한 버젼이 메모리 초과가 나서 바킹독님 강의에서 말씀하신
// 불 BFS 먼저 구하고 그 다음 사람 BFS 구하는 방식으로 구현!!

#include <iostream>
#include <queue>
#include <utility>
using namespace std;
#define X first
#define Y second
int N, M;
int box[1002][1002];
int dist[1002][1002];
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

        for (int dir=0; dir<4; dir++) {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];

            if (nx<0 || nx >= N || ny<0 || ny>=M) continue;
            if (box[nx][ny] == -1) continue;

            dist[nx][ny] = dist[cur.X][cur.Y] + 1;
            Qfire.push({nx, ny});
        }
    }
}

void escape_BFS() {
    bool alive = false;

    while (!Q.empty()) {
        escape_time++;

        int temp_size = Q.size();
        for (int x=0; x<temp_size; x++) {
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
                if (box[nx][ny] == -1) continue;

                if (escape_time < dist[nx][ny]) {
                    Q.push({nx,ny});
                }
            }
        }
        if (alive) break;
    }

    if (alive) cout << escape_time;
    else cout << "IMPOSSIBLE";
}
int main() {
    cin >> N >> M;
    for (int i=0; i<N; i++) {
        for (int j=0; j<M; j++) {
            cin >> input;
            if (input == '#') {
                box[i][j] = -1;
            }
            else if (input == '.') {

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