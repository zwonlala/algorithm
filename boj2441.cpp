//
// Created by 송지원 on 2019-10-24.
//

#include "iostream"
using namespace std;

int main() {
    int n, i, j;
    scanf("%d", &n);

    for (i=0; i<n; i++){
        j=i;
        while (j--) {
            printf(" ");
        }
        j=n-i;
        while (j--) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}