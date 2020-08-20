//
// Created by 송지원 on 2020/08/20.
//

//처음에 생각난 직관적인 솔류선으로 푸는 시간 초과가는 O(N**2)짜리 코드

#include <iostream>
#include <stack>
using namespace std;

int N;
int height[80005];
long long CNT = 0;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;
    for (int i=0; i<N; i++) {
        cin >> height[i];
    }

    for (int i=0; i<N-1; i++) {
        int cur = height[i];
        for (int j=i+1; j<N; j++) {
            if (height[j] < cur) CNT ++;
            else break;
        }
    }
    cout << CNT;
}