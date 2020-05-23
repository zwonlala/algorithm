//
// Created by 송지원 on 2020/05/23.
//

#include<iostream>
using namespace std;

int main () {
    int station[4][3];
    int max = -1;

    for (int i=0; i<4; i++) {
        scanf("%d %d", &station[i][0], &station[i][1]);
        if (i == 0) {
            station[0][2] = station[0][1];
            max = station[0][2];
        }
        else {
            station[i][2] = station[i-1][2] - station[i][0] + station[i][1];
            if (station[i][2] > max) {
                max = station[i][2];
            }
        }
    }
    printf("%d", max);
    return 0;
}