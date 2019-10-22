//
// Created by 송지원 on 2019-03-25.
//
#include <stdio.h>

int main()
{
    int T, H, W, N;
    int i;

    scanf("%d", &T);

    for (i=0; i<T; i++)
    {
        scanf("%d %d %d", &H, &W, &N);

        printf("%2d%02d\n", (N-1)%H+1, (N-1)/H+1);
    }
}