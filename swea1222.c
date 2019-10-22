//
// Created by 송지원 on 2019-07-25.
//

#include <stdio.h>

int main()
{
    int T=10;
    int t, i, n, temp;
    int sum=0;
    temp = n;


    for (t=0; t<T; t++)
    {
        scanf(" %d", &n);

        for(i=0; i<=(n-1)/2; i++)
        {
            scanf("%d", &temp);
            sum += temp;

        }

        printf("#%d: %d\n",t+1, sum);
//        fflush(stdin);
        sum = 0;
    }
    return 0;
}