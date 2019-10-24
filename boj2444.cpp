//
// Created by 송지원 on 2019-10-24.
//

#include "iostream"
using namespace std;

int main() {
    int n, i, j, k;
    cin >> n;
    //first triangle
    for (i=0; i<n; i++) {
        j=n-1-i;
        k=2*i+1;
        while (j--) {
            printf(" ");
        }
        while (k--) {
            printf("*");
        }
        printf("\n");
    }
    //second reverse triangle
    n--;
    for (i=n; i>0; i--){
        printf(" ");

        j=n-i;
        k=2*i-1;
        while (j--) {
            printf(" ");
        }
        while (k--) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}