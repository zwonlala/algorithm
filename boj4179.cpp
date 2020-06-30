//
// Created by 송지원 on 2020/06/30.
//

#include <iostream>
#include <queue>
#include <utility>
using namespace std;
#define X first
#define Y second
int box[1002][1002];
int dis[1002][1002];
int N, M;
char input;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
bool alive = false;
int alive_time = -1;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> M;
    queue<pair<int, int>> Qj;
    queue<pair<int, int>> Qfire;

    for (int i=0; i<N; i++) {
        for (int j=0; j<M; j++) {
            cin >> input;
            if (input == '#') box[i][j] = -1;
            else if (input == '.') {
                box[i][j] = 0;
                dis[i][j] = -1;
            }
            else if (input == 'J') {
                Qj.push({i, j});
            }
            else if (input == 'F') {
                Qfire.push({i, j});
                box[i][j] = -2;
            }
        }
    }

    while (true) {

        int temp_size = Qj.size();
        for (int x=0; x<temp_size; x++){
            auto cur = Qj.front();

            if (cur.X==0 || cur.X==N-1 || cur.Y==0 || cur.Y==M-1) {
                alive = true;
                break;
            }
            Qj.pop();

            for (int dir=0; dir<4; dir++) {
                int nx = cur.X + dx[dir];
                int ny = cur.Y + dy[dir];

                if (nx<0 || nx>=N || ny<0 || ny>=M) continue;
                if (box[nx][ny] != 0 || dis[nx][ny] >= 0) continue;

                Qj.push({nx, ny});
                dis[nx][ny] = dis[cur.X][cur.Y] + 1;
                alive_time = max(alive_time, dis[nx][ny]);
            }
        }
        alive_time++;


        temp_size = Qfire.size();
        for (int x=0; x<temp_size; x++){
            auto cur = Qfire.front();
            Qfire.pop();

            for (int dir=0; dir<4; dir++) {
                int nx = cur.X + dx[dir];
                int ny = cur.Y + dy[dir];

                if (nx<0 || nx>=N || ny<0 || ny>=M) continue;
                if (box[nx][ny] == -1 ) continue;

                Qfire.push({nx, ny});
                box[nx][ny] = -2;
            }
        }

        if (alive) break;
    }

    if (alive) cout << alive_time+1 ;
    else cout << "IMPOSSIBLE";
}