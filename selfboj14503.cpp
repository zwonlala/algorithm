//
// Created by 송지원 on 2020/05/29.
//

#include <iostream>

using namespace std;

int N, M;
int r, c, d;
int input[50][50];

int dx[4] = {-1, 0, +1, 0};
int dy[4] = {0, +1, 0, -1};

int ANS = 1;

void solve() {
    while (true) {
        bool clean = false;
//내가 틀린 부분
//        if(input[r][c] == 0) {
//            clean = true;
//            input[r][c] = 2;
//            ANS++;
//        }

        for (int i=0; i<4; i++) {
            int nd = (d + 3) % 4; // 그냥  "int nd = (d+3)%4;" 이렇게 해야함!!
            int nx = r + dx[nd];
            int ny = c + dy[nd];
            d = nd; //내가 빼먹은 부분

            if (input[nx][ny] == 0) {
                input[nx][ny] = 2;
                ANS++;
                clean = true;
//                d = nd; 여기가 아
                r = nx;
                c = ny;
                break;
            }
        }

        if (clean == false) {
            int nx = r - dx[d];
            int ny = c - dy[d];
            if (input[nx][ny] == 1) { return; }
            r = nx;
            c = ny;
        }
    }
}


int main() {
    scanf("%d %d", &N, &M);
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