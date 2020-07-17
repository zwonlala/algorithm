//
// Created by 송지원 on 2020/07/17.
//

//바킹독님 버젼 코드
//내 코드랑 시간 차이가 많이 남.(바킹독님 코드: 0ms / 내 코드: 1216ms)
// -> 내 코드는 처음부터 계속 돌아서 만약에 찾으면 출력하고
//      바킹독님 코드는 딱 문제에서 주어진 index만 찾기 때문인 것 같음! 리스펚~


#include <iostream>
using namespace std;

int func(int n, int r, int c) {
    if (n==0) return 0;
    int half = 1 << (n-1);

    if (r < half && c < half) return func(n-1, r, c);
    if (r < half && c >= half) return half*half + func(n-1, r, c-half);
    if (r >= half && c < half) return 2*half*half + func(n-1, r-half, c);
    else return 3*half*half + func(n-1, r-half, c-half);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, r, c;
    cin >> n >> r >> c;
    cout << func(n, r, c);
}