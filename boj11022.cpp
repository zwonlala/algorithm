//
// Created by 송지원 on 2019-10-15.
//

#include "iostream"
using namespace std;

int main() {
    int a, b, i, T;
    cin >> T;

    for (i=0; i<T; i++) {
        cin >> a >> b;
        printf("Case #%d: %d + %d = %d\n", i+1, a, b, a+b);
    }
    return 0;
}