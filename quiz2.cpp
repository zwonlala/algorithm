//
// Created by 송지원 on 2020/06/01.
//

#include <iostream>

using namespace std;

int main() {
    int N;
    int arr[1000];

    scanf("%d", &N);
    for (int i=0; i<N; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i=0; i<N; i++) {
        for (int j=i+1; j<N; j++) {
            if (arr[i]+arr[j] == 100) {
                printf("1");
                return 0;
            }
        }
    }
    printf("0");
    return 0;
}