//
// Created by 송지원 on 2020/05/20.
//

#include <cstdio>
using namespace std;

int main() {
    int d[5];
    for (int i=0; i<5; i++) {
        scanf("%1d", &d[i]);
    }
    for (int i=0; i<5; i++) {
        printf("[%d", d[i]);
        for (int j=0; j<4-i; j++) {
            printf("0");
        }
        printf("]\n");
    }
    return 0;
}
