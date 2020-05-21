//
// Created by 송지원 on 2020/05/21.
//

#include <cstdio>
using namespace std;

int main() {
    long a, b, c;
    scanf("%ld%ld%ld", &a, &b, &c);
    printf("%ld\n%.1f", a+b+c, (a+b+c)/3.0);
    return 0;
}