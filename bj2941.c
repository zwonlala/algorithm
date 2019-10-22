//
// Created by 송지원 on 2019-03-21.
//

#include <stdio.h>
#include <string.h>

int main()
{
    char input[102];
    char ch;
    int i;
    int cnt = 0;

    scanf("%s", input);

    for (i=0; i<strlen(input); i++)
    {
        ch = input[i];
        switch (ch)
        {
            case 'c':
                if (input[i+1] == '=' || input[i+1] == '-')
                    i++;
                cnt++;
                break;

            case 'd':
                if (input[i+1] == 'z' && input[i+2] == '=')
                    i+=2;
                else if (input[i+1] == '-')
                    i++;
                cnt++;
                break;

            case 'l':
                if (input[i+1] == 'j')
                    i++;
                cnt++;
                break;

            case 'n':
                if (input[i+1] == 'j')
                    i++;
                cnt++;
                break;

            case 's':
                if (input[i+1] == '=')
                    i++;
                cnt++;
                break;

            case 'z':
                if (input[i+1] == '=')
                    i++;
                cnt++;
                break;

            default:
                cnt ++;
                break;
        }
    }

    printf("%d", cnt);
}