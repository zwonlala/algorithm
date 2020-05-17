//
// Created by 송지원 on 2020-03-14.
//

#include <iostream>

using namespace std;

int arr[3005];

int main() {
    int N, K;
    int gap;
    int left, right;
    int ret;
    scanf("%d %d", &N, &K);

    for (int i=0; i<N; i++) {
        scanf("%d", &arr[i]);
    }
    gap = N - K + 1;
    left = 0;
    right = gap - 1;
    ret = arr[N-1] - arr[0];

    for ( ; right < N; ) {
        int temp = arr[right] - arr[left];

        if (temp < ret) {
            ret = temp;
        }
        left ++;
        right ++;
    }
    printf("%d\n", ret);
    return 0;
}