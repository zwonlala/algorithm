//
// Created by 송지원 on 2019-03-21.
//

#include <stdio.h>
#include <string.h>

int main()
{
    int N;
    char input[1000];
    int char_cnt[26] = {0};
    int cnt = 0;
    char ch;

    int i,j;

    scanf("%d", &N);

    for (i=0; i<N; i++)
    {
        scanf("%s", input);

        ch = input[0];
        char_cnt[ch-'a']++;

        for (j=1; j<strlen(input); j++)
        {
            if (ch == input[j])
                continue;
            else
            {
                if (char_cnt[input[j]-'a'] != 0)
                {
                    cnt++;
                    break;
                }
                ch = input[j];
                char_cnt[ch-'a']++;
            }
        }

        for(j=0; j<26; j++)
        {
            char_cnt[j] = 0;
        }
    }

    printf("%d", N-cnt);
}
