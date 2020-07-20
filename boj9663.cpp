//
// Created by 송지원 on 2020/07/18.
//

//처음 강의를 보고 isUsed2, isUsed3과 같은 솔류션을 학습한 후 풀었다가 틀림.
//index를 c-r을 하는 코드에서 N-1을 더해주지 않아서 틀림 ㅠ
//

#include <iostream>
using namespace std;
#define MAX 15
int N, CNT;

bool isUsed1[MAX];
bool isUsed2[2*MAX - 1]; //y=-x+k 대각선
bool isUsed3[2*MAX - 1]; //y=x+k 대각선

//bool checkCol(int c) {
//    if (isUsed1[c]) return false;
//    return true;
//}
//
//bool checkDiagonal1(int r, int c) {
//    if (isUsed2[c-r]) return false;
//    return true;
//}

void func(int k) {
    int r = k;
    if (k == N){
        CNT++;
        return;
    }
    else {
        for (int c=0; c<N; c++) {
            if (isUsed1[c] == true) continue;
            if (isUsed2[c-r+N-1] == true) continue;
            if (isUsed3[r+c] == true) continue;

            isUsed1[c] = true;
            isUsed2[c-r+N-1] = true;
            isUsed3[r+c] = true;
            func(k+1);
            isUsed1[c] = false;
            isUsed2[c-r+N-1] = false;
            isUsed3[r+c] = false;
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    func(0);
    cout << CNT;
    return 0;
}