//
// Created by 송지원 on 2020-02-13.
//

#include <iostream>

using namespace std;

int dice[1001][4];
int money [1001];

int countZero(int* input, int count) {
    int ret = 0;
    for (int i=0; i<count; i++) {
        if (input[i] == 0) {
            ret ++;
        }
    }

    return ret;
}

int main() {
    int T;
    int zeroCnt = 0;
    int mArray[6];

    scanf("%d", &T);
    for (int i=0; i<T; i++) {
        scanf("%d %d %d %d", &dice[i][0], &dice[i][1], &dice[i][2], &dice[i][3]);

        mArray[0] = dice[i][0] - dice[i][1];
        mArray[1] = dice[i][1] - dice[i][2];
        mArray[2] = dice[i][2] - dice[i][3];
        mArray[3] = dice[i][3] - dice[i][0];
        mArray[4] = dice[i][0] - dice[i][2];
        mArray[5] = dice[i][1] - dice[i][3];

        zeroCnt = countZero(mArray, 6);

        if (zeroCnt == 6) {
            money[i] = 50000 +
        }
        else if (zeroCnt == 3) {
            money[i] = 13000;
        }
        else if (zeroCnt == 2) {
            money[i] = 6000;
        }
        else if (zeroCnt == 1) {
            money[i] = 16000;
        }
        else {
            money[i] = 600;
        }
    }

    int max = -1;

    for (int i=0; i<T; i++) {
        if (money[i] > max) {
            max = money[i];
        }
    }
    printf("%d", max);

    return 0;


}