//
// Created by 송지원 on 2020/05/29.
//

#include <iostream>
using namespace std;

int N, M, x, y, K;
int input[20][20];
int inputK[1000];


int dice[6] = {0, 0, 0, 0, 0, 0}; //top, bottom, S, E, N, W 순
int dx[5] = {0, 0, 0, -1, +1};
int dy[5] = {0, +1, -1, 0, 0};

void roll(int i) {
    int temp;
    switch(i) {
        case 1:
            temp = dice[0];
            dice[0] = dice[5];
            dice[5] = dice[1];
            dice[1] = dice[3];
            dice[3] = temp;
            break;
        case 2:
            temp = dice[0];
            dice[0] = dice[3];
            dice[3] = dice[1];
            dice[1] = dice[5];
            dice[5] = temp;
            break;
        case 3:
            temp = dice[0];
            dice[0] = dice[2];
            dice[2] = dice[1];
            dice[1] = dice[4];
            dice[4] = temp;
            break;
        case 4:
            temp = dice[2];
            dice[2] = dice[0];
            dice[0] = dice[4];
            dice[4] = dice[1];
            dice[1] = temp;
            break;

    }
}

void solve() {
    for (int i=0; i<K; i++) {
        int move = inputK[i];
//        printf("%d : ", inputK[i] );
        int nx = x + dx[move], ny = y + dy[move];

        if (nx<0 || nx>=N || ny<0 || ny>=M) {
//            printf("exit\n");
            continue;
        }

        roll(move);
        if (input[nx][ny] == 0) {
            input[nx][ny] = dice[1];
            printf("%d\n", dice[0]);
        }
        else {
            dice[1] = input[nx][ny];
            input[nx][ny] = 0;
            printf("%d\n", dice[0]);
        }
        x = nx;
        y = ny;
    }

}

int main() {
    scanf("%d%d%d%d%d", &N, &M, &x, &y, &K);
    for (int i=0; i<N; i++) {
        for (int j=0; j<M; j++) {
            scanf("%d", &input[i][j]);
        }
    }
    for (int i=0; i<K; i++) {
        scanf("%d", &inputK[i]);
    }
    solve();

}
