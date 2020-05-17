//
// Created by 송지원 on 2020-03-13.
//

#include <iostream>
#define UPPER(X,R) ((X)%(R)==0) ? ((X)/(R)) : (((X)/(R))+1)

using namespace std;

int arr[100000+5];

int main() {
    int N, K;
    int I;
    int L, R;

    scanf("%d %d", &N, &K);

    for (int i=0; i<N; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] == 1) {
            I = i;
        }
    }

    L = I - K + 1;
    R = I;

    int sum = N;

    for (; L<=I; ) {
        int left = UPPER(L, K-1);
        int right = UPPER(N-1 - R, K-1);
        int sum_temp = left + right + 1;

        if (sum_temp < sum) {
            sum = sum_temp;
        }
        L++;
        R++;
    }


    printf("%d\n", sum);

    return 0;
}