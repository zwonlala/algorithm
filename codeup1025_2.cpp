//
// Created by 송지원 on 2020/05/20.
//

#include <cstdio>
#include <math.h>

using namespace std;

int main() {
    int d, temp, div;
    scanf("%5d", &d);

    for (int i=0; i<5; i++) {
        div = (int)pow(10.0, 4-i);
        temp = d/div;
        printf("[%d]\n", temp*div);
        d %= div;
    }
    return 0;
}