//
// Created by 송지원 on 2019-03-25.
//
여기서부터 다시해라 송지원!!!
#include <stdio.h>

int main()
{
    int T, k, n;
    int i,j,o; //i is the number of test case
                //j is the b
    int sum=0;

    int rooms[14] = {0};

    scanf("%d", &T);

    for (i=0; i<T; i++)
    {
        scanf("%d", &k);
        scanf("%d", &n);

        for (j=0; j<k+1; j++)
        {
            if (j==0)
            {
                for (o=0; o<n; o++)
                {
                    rooms[o]=o+1;
                }
            }
            else
            {

            }
        }
    }
}
