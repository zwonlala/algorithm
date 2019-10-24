//
// Created by 송지원 on 2019-10-24.
//

#include "iostream"
using namespace std;

int main() {
    int n, i, j, k;
    scanf("%d", &n);

    for (i=0; i<n; i++){
        j=n-1-i; //num of blank
        while (j--) {
            printf(" ");
        }
        k=2*i+1;
        while (k--) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}