//
// Created by 송지원 on 2020/05/21.
//

#include <cstdio>

using namespace std;

int money[6] = {500, 100, 50, 10, 5, 1};

int main() {
    int pay_money;
    int change_money;
    int cnt = 0;

    scanf("%d", &pay_money);
    change_money = 1000 - pay_money;

    for (int i=0; i<6; i++) {
        while (change_money/money[i] > 0) {
            cnt += change_money/money[i];
            change_money %= money[i];
        }
    }
    printf("%d", cnt);
    return 0;
}