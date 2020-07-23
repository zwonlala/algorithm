//
// Created by 송지원 on 2020/07/23.
//

#include <iostream>
#include <algorithm>
using namespace std;

int diceCnt[6];
int diceCnt2[6];
int MAX;
int maxVal;
int N;
int temp;

int main() {
    cin >> N;
    for (int i=0; i<N; i++){
        fill(diceCnt, diceCnt+6, 0);
        fill(diceCnt2, diceCnt2+6, 0);
        temp = 0;
        for (int j=0; j<4; j++) {
            cin >> temp;
            maxVal = max(maxVal, temp);
            diceCnt[temp-1]++;
            diceCnt2[temp-1]++;
        }
        sort(diceCnt2, diceCnt2+6);

        if (diceCnt2[5] == 4){
            temp = 50000 + 5000*maxVal;
        }
        else if (diceCnt2[5] == 3) {
            for (int j=0; j<6; j++) {
                if (diceCnt[j] == 3) {
                    temp = 10000 + 1000*(j+1);
                }
            }
        }
        else if (diceCnt2[5] == 2 && diceCnt2[4] == 2){
            temp = 2000;
            for (int j=0; j<6; j++) {
                if (diceCnt[j] == 2) {
                    temp += 500*(j+1);
                }
            }
        }
        else if (diceCnt2[5] == 2 && diceCnt2[4] == 1){
            temp = 1000;
            for (int j=0; j<6; j++) {
                if (diceCnt[j] == 2) {
                    temp += 100*(j+1);
                }
            }
        }
        else {
           temp = 100 * maxVal;
        }

        MAX = max(MAX, temp);
    }
    cout << MAX;
}