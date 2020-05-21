//
// Created by 송지원 on 2020/05/21.
//

#include <cstdio>
using namespace std;

int main() {
    int a, b;
    scanf("%d%d", &a, &b);

    for (int i=0; i<b; i++) {
        a *= 2;
    }
    printf("%d", a);
    return 0;
}