//
// Created by 송지원 on 2020/05/23.
//

#include <iostream>

using namespace std;

int main() {
    int input;
    int ans = 0;
    scanf("%d", &input);

    while (input != 0) {
        ans += (input%2);
        input /= 2;
    }
    printf("%d", ans);
}