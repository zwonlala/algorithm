//
// Created by 송지원 on 2020/05/22.
//

#include <iostream>
#include <string.h>

using namespace std;

int main() {
    char stra[51];
    char strb[51];
    int lena, lenb;
    int min = 50;

    scanf("%s%s", stra, strb);
    lena = strlen(stra);
    lenb = strlen(strb);



    for (int i=0; i<=lenb - lena; i++) {
        int temp = 0;

        for (int j=0; j<lena; j++) {
            if (stra[j] != strb[i+j]) {
                temp++;
            }
        }

        if (temp < min) {
            min = temp;
        }
    }
    printf("%d", min);
}