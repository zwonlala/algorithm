//
// Created by 송지원 on 2020/05/25.
//

#include <iostream>
using namespace std;

char input[50][50];
char cases[2][9] = {"WBWBWBWB", "BWBWBWBW"};

int check(int i, int j) {
    int count1 = 0;
    int count2 = 0;

    for (int k=0; k<8; k++) {
        for (int l=0; l<8; l++) {
            if (input[i+k][j+l] != cases[k%2][l]) {
//                printf("k:%d, l:%d  <%c><%c>\n", k, l, input[i+k][j+l], cases[k%2][l]);
                count1++; }
        }
    }

    for (int k=0; k<8; k++) {
        for (int l=0; l<8; l++) {
            if (input[i+k][j+l] != cases[(k+1)%2][l]) { count2++; }
        }
    }

//    printf("count1:%d / count2:%d\n", count1, count2);
    return count1<count2? count1 : count2;
}
int main() {
    int N, M;
    scanf("%d %d", &N, &M);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> input[i][j];
        }
    }


//    for (int i = 0; i < N; i++) {
//        for (int j = 0; j < M; j++) {
//            printf("%c", input[i][j]);
//        }
//        printf("\n");
//    }

    int i, j;
    int ANS = 250;
    for (i=0; i<=N-8; i++) {
        for (j=0; j<=M-8; j++) {
//            printf("%d/%d\t", i, j);
            int change_count = check(i, j);
//            printf("%d\n", change_count);
            if (change_count < ANS) {
                ANS = change_count;
            }
        }
    }

    printf("%d", ANS);
}