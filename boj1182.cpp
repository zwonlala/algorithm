//
// Created by 송지원 on 2020/07/18.
//


#include<iostream>
using namespace std;

int N, S;
int arr[22];
bool used[22];
int cnt;

int getSum() {
    int sum = 0;
    for (int i=0; i<N; i++) {
        if (used[i]) sum += arr[i];
    }
    return sum;
}

void func(int cur, int max) {
    if (cur == max && getSum()==S ) {
        for (int i=0; i<22; i++) cout <<used[i] << " ";
        cout << endl;
        cnt++;
        return;
    }
    else {
        for (int i=0; i<N; i++) {
            if (used[i]) continue;

            used[i] = true;
            func(cur+1, max);
            used[i] = false;
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> S;

    for (int i=0; i<N; i++) {
        cin >> arr[i];
    }

    for (int i=1; i<=N; i++) {
        func(0, i);
    }

    cout << cnt;
}