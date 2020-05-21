//
// Created by 송지원 on 2020/05/21.
//

#include <iostream>
using namespace std;

int main() {
    int N;
    int input[2][10];

    scanf("%d", &N);
    for (int i=0; i<N; i++) {
        scanf("%d", &input[0][i]);
    }

    input[1][N-1] = 0;
    for (int j=N-2; j>=0; j--) {
        input[1][j] = input[0][j];

        for (int k=j+1; k<N; k++) {
            if (input[1][k] >= input[1][j]) {
                input[1][k]++;
            }
        }
    }

//    for (int i=0; i<N; i++) {
//        printf("%d ", input[0][i]);
//    }
//    printf("\n");
//    for (int i=0; i<N; i++) {
//        printf("%d ", input[1][i]);
//    }

    for (int i=0; i<N; i++) {
        int j=0;
        while (input[1][j] != i){
            j++;
        }
        printf("%d ", j+1);
    }
}