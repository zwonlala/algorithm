//
// Created by 송지원 on 2020/05/28.
//

#include <iostream>
using namespace std;

int N, M, ANS = 1;
int r, c, d;
int input[50][50];

const int dx[] = { -1, 0, +1, 0};
const int dy[] = { 0, +1, 0, -1};

void solve() {
    while (true) {
        bool clean = false;

        for (int i=0; i<4; i++) {
            d = (d+3) % 4;
            int nx = r + dx[d];
            int ny = c + dy[d];

            if (input[nx][ny] == 0) {
                input[nx][ny] = 2;
                ANS++;
                r = nx, c = ny;
                clean = true;
                break;
            }
        }

        if (clean == false) {
            if (input[r-dx[d]][c-dy[d]] == 1) return;
            else r-=dx[d], c-=dy[d];
        }
    }
}

int main() {
    scanf("%d%d", &N, &M);
    scanf("%d%d%d", &r, &c, &d);
    for (int i=0; i<N; i++) {
        for (int j=0; j<M; j++) {
            scanf("%d", &input[i][j]);
        }
    }

    input[r][c] = 2;
    solve();
    printf("%d", ANS);
    return 0;
}