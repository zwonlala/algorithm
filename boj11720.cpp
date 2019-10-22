//
// Created by 송지원 on 2019-10-22.
//

#include "iostream"

using namespace std;

int main ()
{
    int T, i, sum=0;
    scanf("%d", &T);
    while (T--) {
        scanf("%1d", &i);
        sum += i;
    }
    printf("%d", sum);
    return 0;
}