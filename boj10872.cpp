//
// Created by 송지원 on 2020-02-15.
//

#include <iostream>

int main() {
    int N;
    int ans = 1;
    scanf("%d", &N);

    while (N > 1) {
        ans *= N;
        N--;
    }
    printf("%d\n", ans);
}