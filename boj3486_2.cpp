//
// Created by 송지원 on 2020/05/21.
//

#include <cstdio>
using namespace std;

int main() {
    int N;
    int a, b, result;
    int temp1, temp2 = 0;

    scanf("%d", &N);
    while (N--) {
        scanf("%d%d", &a, &b);

        while (a) {
            temp1 *= 10;
            temp1 += a%10;
            a /= 10;
        }

        while (b) {
            temp2 *= 10;
            temp2 += b%10;
            b /= 10;
        }

        result = temp1 + temp2;

        while (result % 10 == 0) {
            result /= 10;
        }
        while (result) {
            printf("%d", result%10);
            result /= 10;
        }
        printf("\n");
        temp1 = 0;
        temp2 = 0;
    }
    return 0;
}