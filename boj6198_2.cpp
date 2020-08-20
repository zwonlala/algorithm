//
// Created by 송지원 on 2020/08/20.
//

//새로 생각한 솔류션으로 푸는 코드
//구글에서 스택을 비우게 하는 코드 검색해서 사용함.


#include <iostream>
#include <stack>
using namespace std;

int N;
int temp;
int MAX;
int ANS = 0;

template <typename T> inline void clear(std::stack<T>& Stacks){
    while ( false == Stacks.empty()) {
        Stacks.pop();
    }
}

int getCount(stack<int>&S, int input) {
    int cnt=0;
    while(true) {
        if (S.top() < input) {
            S.pop();
            cnt ++;
        }
        else {
            break;
        }
    }
    return cnt;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    stack<int> S;
    cin >> N;
    for (int i=0; i<N; i++) {
        cin >> temp;
        if (S.empty()) {
            S.push(temp);
            MAX = temp;
        }
        else {
            if (S.top() > temp) {
                S.push(temp);
            }
            else if (temp > MAX) {
                ANS += (S.size()-1)*S.size()/2;
                clear(S);
                S.push(temp);
                MAX = temp;
            }
            else {
                int cnt = getCount(S, temp);
                ANS += cnt*(cnt+1)/2;
                S.push(temp);
            }
        }
    }
    ANS += (S.size()-1)*S.size()/2;
    cout << ANS;
}