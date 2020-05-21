//
// Created by 송지원 on 2020/05/20.
//

#include <cstdio>

using namespace std;

int main() {
    long a, b;
    double result;
    scanf("%ld%ld", &a, &b);
    printf("%ld\n", a + b);
    printf("%ld\n", a - b);
    printf("%ld\n", a * b);
    printf("%ld\n", a / b);
    printf("%ld\n", a % b);
    printf("%.2f\n", (double)a / b);
    return 0;
}