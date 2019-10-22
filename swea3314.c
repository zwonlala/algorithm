//
// Created by 송지원 on 2019-07-25.
//

#include<stdio.h>

int main()
{
    int total_score = 0;
    int score_input;

    int n=5;
    int T;
    scanf("%d", &T);

    for (int t=1; t<T+1; t++)
    {
        while(n--)
        {
            scanf("%d", &score_input);
            if (score_input < 40)
            {
                total_score += 40;
            }
            else
            {
                total_score += score_input;
            }
        }
        printf("#%d %d\n", t, total_score/5);
    }

}