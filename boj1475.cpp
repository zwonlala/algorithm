//
// Created by 송지원 on 2020/07/07.
//
//풀다가 모르겠어서 아래 주소 참고하여 풀이
//https://blockdmask.tistory.com/97
#include <iostream>
using namespace std;
string num;
int len;
int numCnt[10];
int cnt69;
int MAX = -1;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> num;
    len = num.size();
    for (int i=0; i<len; i++){
        if (num[i]=='6' || num[i]=='9') cnt69++;
        else numCnt[num[i]-'0']++;
    }
    for (int i=0; i<10; i++) {
        if (i=='6' || i=='9') continue;

        MAX = max(MAX, numCnt[i]);
    }

    cout << max(MAX, (cnt69+1)/2);
}