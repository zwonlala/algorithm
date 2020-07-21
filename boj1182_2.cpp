//
// Created by 송지원 on 2020/07/21.
//

#include <iostream>
using namespace std;

int N, S;
int arr[22];
int binaryArray[22];
int CNT;

void makeBinay(int input) {
    fill(binaryArray, binaryArray+22, 0);
    for (int i=0; i<N; i++) {
        binaryArray[i] = input%2;
        input /=2;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >>  N >> S;
    for (int i=0; i<N; i++) {
        cin >> arr[i];
    }

    int combination = (1<<N)-1;
    for (int i=1; i<=combination; i++) {
//        cout << "[" <<i<<"]";
        makeBinay(i);
        int sum = 0;
        for (int j=0; j<N; j++) {
            sum += arr[j] * binaryArray[j];
        }
        if (sum == S) {
//            for (int j=0; j<N; j++) {
////                cout << binaryArray[j] <<", ";
//            }
//            cout << endl;
            CNT++;
        }
    }
    cout << CNT;
}