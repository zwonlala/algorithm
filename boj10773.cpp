//
// Created by 송지원 on 2020/08/08.
//

#include <iostream>
#include <stack>
using namespace std;

stack<int> S;
int N;
int temp;
int sum;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0; i<N; i++) {
        cin >> temp;
        if (temp == 0) {
            S.pop();
        }
        else {
            S.push(temp);
        }
    }

    temp = S.size();
    for (int i=0; i<temp; i++) {
        sum += S.top();
        S.pop();
    }
    cout << sum;
    return 0;
}


