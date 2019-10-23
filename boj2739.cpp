//
// Created by 송지원 on 2019-10-23.
//

#include "iostream"
using namespace std;

int main() {
    int n, i;
    scanf("%d", &n);

    for (i=1; i<10; i++){
        printf("%d * %d = %d\n", n, i, n*i);
    }
}