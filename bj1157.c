//
// Created by 송지원 on 2019-03-21.
//

#include <stdio.h>
#include <string.h>

int main()
{
    char input[1000000];
    int i;
    int char_cnt[26] = {0};
    int tmp;
    int max_cnt=0, max_id, max=-1;

    scanf("%s", input);

    for (i=0; i<strlen(input); i++)
    {
        tmp = input[i] - 'a';
        if(tmp < 0)
        {
            tmp = input[i] - 'A';
            char_cnt[tmp]++;
        }
        else
        {
            char_cnt[tmp]++;
        }

        if (char_cnt[tmp] > max)
        {
            max = char_cnt[tmp];
            max_id = tmp;
        }
    }

    for (i=0; i<26; i++)
    {
        if(char_cnt[i] == max)
        {
            max_cnt ++;
        }
    }

    if (max_cnt > 1)
    {
        printf("?");
    }
    else
    {
        printf("%c", 'A'+max_id);
    }

    return 0;

}