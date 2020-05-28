//
// Created by 송지원 on 2020/05/25.
//

#include <iostream>
#include <utility>
using namespace std;

int N, M;
int input[50][50];
int direction[4] = {0, 3, 2, 1};

pair<int, int> get_left(int i, int j, int d) {
    switch(d) {
        case 0:
            return make_pair(i, j-1);
        case 1:
            return make_pair(i-1, j);
        case 2:
            return make_pair(i, j+1);
        case 3:
            return make_pair(i+1, j);
    }
}

pair<int, int> get_back(int i, int j, int d) {
    switch(d) {
        case 0:
            return make_pair(i+1, j);
        case 1:
            return make_pair(i, j-1);
        case 2:
            return make_pair(i-1, j);
        case 3:
            return make_pair(i, j+1);
    }
}

bool cango(pair<int, int> location) {
    int i = location.first;
    int j = location.second;

    if (i >= N-1 || i<0 ) {
        return false;
    }
    else if (j >= M-1 || j<0) {
        return false;
    }

    if (input[i][j] == 1 ) { //i , j is wall
        return false;
    }
    else if (input[i][j] == -1) { //i , j is cleaned place
        return false;
    }
    return true;
}

int get_next_d(int input) {
    if (input == 0) {
        return 3;
    }
    else {
        return input-1;
    }
}

bool is_wall(int i, int j) {
    if (input[i][j] == 1) {
        return true;
    }
}
int main() {
    int r, c, d;
    int count = 0;

    scanf("%d%d", &N, &M);
    scanf("%d%d%d", &r, &c, &d);
    for (int i=0; i<N; i++) {
        for (int j=0; j<M; j++) {
            scanf("%d", &input[i][j]);
        }
    }

    while (true) {
        count ++;
        input[r][c] = -1;
        printf("%d->", count);

        int rotate = 0;
        while (true) {
            if (rotate == 4) {
                pair<int, int> back = get_back(r, c, d);
                rotate = 0;
                if (is_wall(back.first, back.second)) {
                    printf("%d", count);
                    return 0;
                }
            }
            pair<int, int> next = get_left(r, c, d);
            if (cango(next)) {
                r = next.first;
                c = next.second;
                d = get_next_d(d);
                break;
            } else {
                d = get_next_d(d);
            }
            rotate++;
        }

    }


}