//
// Created by 송지원 on 2019-10-23.
//

#include "iostream"
using namespace std;

int main() {
    int n, i, j;
    scanf("%d", &n);
    for (i=0; i<n; i++) {
        j= n-1-i;
        while (j--) {
            printf(" ");
        }
        j= i+1;
        while (j--) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}