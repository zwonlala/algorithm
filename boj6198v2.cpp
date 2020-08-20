//
// Created by 송지원 on 2020/08/20.
//

//푸는 로직을 모르겠어서 솔류션 구글 검새하고 풂

//ANS 변수를 longlong으로 안해서 틀림 ㅠ

#include <iostream>
#include <stack>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    stack<int> S;
    long long ANS = 0;

    cin >> N;
    for (int i=0; i<N; i++) {
        int temp;
        cin >> temp;
        if (S.empty()) {
            S.push(temp);
        }
        else if (S.top() > temp ) {
            S.push(temp);
        }
        else {
            while (true) {
                S.pop();
                if (S.empty()) break;
                if (S.top() > temp) break;
            }
            S.push(temp);
        }
        ANS += (S.size() - 1);
    }
    cout << ANS;
}