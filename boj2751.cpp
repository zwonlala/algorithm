//
// Created by 송지원 on 2020-02-17.
//

#include <iostream>
#include <algorithm>

using namespace std;

int arr[1000000+3];

int main() {
    int N;
    scanf("%d", &N);

    for (int i=0; i<N; i++){
        scanf("%d", &arr[i]);
    }

    sort(arr, arr+N);

    for (int i=0; i<N; i++){
        printf("%d\n", arr[i]);
    }
}