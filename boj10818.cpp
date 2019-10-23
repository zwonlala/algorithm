//
// Created by 송지원 on 2019-10-23.
//

#include "iostream"
using namespace std;

int main() {
    int n, i, min=1000000, max=-1000000, temp;

    scanf("%d", &n);

    for (i=0; i<n; i++) {
        scanf("%d", &temp);

        if (temp > max) {
            max = temp;
        }
        if (temp < min) {
            min = temp;
        }
    }
    printf("%d %d", min, max);
    return 0;
}