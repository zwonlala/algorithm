//
// Created by 송지원 on 2020/06/30.
//

#include <iostream>
#include <queue>
#include <utility>
using namespace std;
#define X first.first
#define Y first.second
#define Z second

int N, M, H;
int box[102][102][102];
int dist[102][102][102];
int dx[6] = {1, -1, 0, 0, 0, 0};
int dy[6] = {0, 0, 1, -1, 0, 0};
int dz[6] = {0, 0, 0, 0, 1, -1};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> M >> N >> H;

    queue<pair<pair<int,int>, int>> Q;
    for (int k=0; k<H; k++) {
        for (int i=0; i<N; i++) {
            for (int j=0; j<M; j++) {
                cin >> box[i][j][k];
                if (box[i][j][k] == 0) {
                    dist[i][j][k] = -1;
                }
                else if (box[i][j][k] == 1) {
                    Q.push({{i, j}, k});
//                    cout << i <<" " << j <<" " << k;
                }
            }
        }
    }
//    while (!Q.empty()) {
//        auto cur = Q.front();
//        Q.pop();
//        cout << cur.X << " " << cur.Y << " " << cur.Z << "\n";
//    }

    while (!Q.empty()) {
        auto cur = Q.front();
        Q.pop();

//        cout << "\n\ncur:" << cur.X << "," << cur.Y << "," << cur.Z << ": ";
        for (int dir=0; dir<6; dir++) {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            int nz = cur.Z + dz[dir];

            if (nx<0 || nx>=N || ny<0 || ny>=M || nz<0 || nz>=H) continue;
            if (dist[nx][ny][nz] >= 0) continue;

//            cout <<"["<<nx<<","<<ny<<","<<nz<<"]\t";
            dist[nx][ny][nz] = dist[cur.X][cur.Y][cur.Z] + 1;
            Q.push({{nx,ny}, nz});
        }
    }

    int day_cnt = 0;
    for (int i=0; i<N; i++) {
        for (int j=0; j<M; j++) {
            for (int k=0; k<H; k++) {
                if (dist[i][j][k] == -1) {
                    cout << -1;
                    return 0;
                }
                day_cnt = max(day_cnt, dist[i][j][k]);
            }
        }
    }
    cout << day_cnt;
}
