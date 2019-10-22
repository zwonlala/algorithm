//
// Created by 송지원 on 2019-03-21.
//

#include <stdio.h>

int main()
{
    int input1, input2;
    int l1,l2,l3, r1,r2,r3;
    int trans1, trans2;

    scanf("%d %d", &input1, &input2);

    l1 = input1/100;
    l2 = input1/10%10;
    l3 = input1%10;

    r1 = input2/100;
    r2 = input2/10%10;
    r3 = input2%10;

    trans1 = 1*l1 + 10*l2 + 100*l3;
    trans2 = 1*r1 + 10*r2 + 100*r3;

    if (trans1 - trans2 < 0)
    {
        printf("%d", trans2);
    }
    else
    {
        printf("%d", trans1);
    }

    return 0;
}
