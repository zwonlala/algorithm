//
// Created by 송지원 on 2019-03-21.
//

#include <stdio.h>

int main()
{
    long long N;
//    int an=2, am=7; //an은 수열 a의 n번째 항, am은 수열 a의 (n+1)번째
    long long an=2, am=7; //an은 수열 a의 n번째 항, am은 수열 a의 (n+1)번째
    int i=2; //value of the n

    scanf("%d", &N);

    if (N == 1)
        printf("1");
    else
    {
        while(1)
        {
            if ((N-an)*(N-am) <= 0)
                break;
            else
            {
                an = am+1;
                am += i * 6;
                i++;
                //printf("i: %d \t/ an : %d / am :%d\n", i, an, am);
            }
        }
        printf("%d", i);
    }

    return 0;
}