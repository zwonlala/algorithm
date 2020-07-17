//
// Created by 송지원 on 2020/07/17.
//
//바킹독님 코드
//2의 k승을 '(1<<k)'로 표현함!!!
//그리고 내가 짠 toggle 코드는 '6-a-b'로 대체 가능함!!!

#include <iostream>
using namespace std;

void func(int a, int b, int n) {
    if (n==1) {
        cout << a << ' ' << b << '\n';
        return;
    }

    func(a, 6-a-b, n-1);
    cout << a << ' ' << b << '\n';
    func(6-a-b, b, n-1);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int k;
    cin >> k;
    cout << (1<<k) - 1 << '\n';
    func(1, 3, k);
    return 0;
}