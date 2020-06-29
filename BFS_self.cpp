//
// Created by 송지원 on 2020/06/29.
//

#include <iostream>
#include <queue>
#include <utility>
using namespace std;

#define X first
#define Y second

int board[502][502] =  {{1,1,1,0,1,0,0,0,0,0},
                        {1,0,0,0,1,0,0,0,0,0},
                        {1,1,1,0,1,0,0,0,0,0},
                        {1,1,0,0,1,0,0,0,0,0},
                        {0,1,0,0,0,0,0,0,0,0},
                        {0,0,0,0,0,0,0,0,0,0},
                        {0,0,0,0,0,0,0,0,0,0} };
bool vis [502][502];
int n = 7, m = 10;
int dx[4] = {+1, 0, -1, 0};
int dy[4] = {0, +1, 0, -1};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    queue<pair<int, int>> Q;
    Q.push({0, 0}); //이 줄이랑 아래 줄 순서 바꾸기
    vis[0][0] = 1;

    while (true) {
        pair <int, int> cur = Q.front();
        Q.pop();
        cout << "(" << cur.X << ", " << cur.Y << ") -> ";

        for (int dir=0; dir<4; dir++) {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];

            if (nx<0 || nx >= n || ny < 0 || ny >= m) continue;
            if (vis[nx][ny] || board[nx][ny] != 1) continue;

            vis[nx][ny] = 1;
            Q.push({nx, ny});
        }
    }

}