//
// Created by 송지원 on 2020/06/29.
//

#include <iostream>
#include <queue>
#include <utility>
using namespace std;
#define X first
#define Y second

int M, N;
int box[1005][1005];
int vis[1005][1005];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int cnt_input[3] = {0}; //-1, 0, 1
int change_cnt = 0;
int DAY = 0;

void print_box() {
    cout << "===================\n";
    for (int i=0; i<N; i++) {
        for (int j=0; j<M; j++) {
            cout << box[i][j] << " ";
        }
        cout << "\n";
    }
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    queue<pair<int, int>> Q;

    cin >> M >> N;
    for (int i=0; i<N; i++){
        for (int j=0; j<M; j++) {
            cin >> box[i][j];
            cnt_input[box[i][j]+1]++;

            if (box[i][j] == 1) {
                Q.push({i, j});
                vis[i][j] = 1;
            }
        }
    }

    if (cnt_input[1] == 0) {
        cout << "0";
        return 0;
    }

    while (!Q.empty()) {
        cout << DAY;
        print_box();
        DAY++;

//        cout << Q.size() << ">>>\n";

        queue<pair<int,int>> temp_Q;
        for (int x=0; x<Q.size(); x++) {
            auto cur = Q.front();
            Q.pop();

            cout << "\ncur:[" << cur.X << "," << cur.Y <<"]";

            for (int dir=0; dir<4; dir++) {
                int nx = cur.X + dx[dir];
                int ny = cur.Y + dy[dir];

                if (nx<0 || nx >= N || ny<0 || ny>=M ) continue;
                if (vis[nx][ny] || box[nx][ny] != 0) continue;

                cout << "\tnx:" <<nx << ", ny:" << ny;
                temp_Q.push({nx, ny});
                vis[nx][ny] = 1;
                change_cnt++;
                box[nx][ny] = 1;
            }
        }

        while (!temp_Q.empty()) {
            Q.push(temp_Q.front());
            temp_Q.pop();
        }
    }

    if (change_cnt == cnt_input[1]) cout << DAY;
    else cout << "-1";
}