//
// Created by 송지원 on 2019-10-15.
//

#include "iostream"
#include <stdio.h>

using namespace std;

int main()
{
    int a, b, T;
    cin >> T;

    while(T--) {
        scanf("%d,%d", &a, &b);
        cout << a+b << endl;
    }
    return 0;
}