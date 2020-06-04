//
// Created by 송지원 on 2020/06/04.
//

#include <iostream>
#include <vector>
using namespace std;

int N;
int arr[1005];
int input_cnt[105];
int ANS;

int func2(int arr[], int N) {
    for (int i=0; i<N; i++) {
        input_cnt[arr[i]]++;
    }

    for (int i=0; i<50; i++) {
        if (input_cnt[i] * input_cnt[100-i] == 1) return 1;
    }

    if (input_cnt[50] > 1) {
        return 1;
    }
    return 0;
}

int main () {
    cin >> N;
    for (int i=0; i<N; i++) {
        cin >> arr[i];
    }
    ANS = func2(arr, N);
    cout << ANS;
    return 0;
}