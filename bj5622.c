//
// Created by 송지원 on 2019-03-21.
//

#include <stdio.h>
#include <string.h>

int main()
{
    char input[16];
    int sum=0;
    int i;

    scanf("%s", input);

    for (i=0; i<strlen(input); i++)
    {
        switch(input[i] - 'A')
        {
            case 0: //'A'
            case 1: //'B'
            case 2: //'C'
                sum += 3; //dial 2
                break;

            case 3: //'D'
            case 4: //'E'
            case 5: //'F'
                sum += 4; //dial 3
                break;

            case 6: //'G'
            case 7: //'H'
            case 8: //'I'
                sum += 5; //dial 4
                break;

            case 9: //'J'
            case 10: //'K'
            case 11: //'L'
                sum += 6; //dial 5
                break;

            case 12: //'M'
            case 13: //'N'
            case 14: //'O'
                sum += 7; //dial 6
                break;

            case 15: //'P'
            case 16: //'Q'
            case 17: //'R'
            case 18: //'S'
                sum += 8; //dial 7
                break;

            case 19: //'T'
            case 20: //'U'
            case 21: //'V'
                sum += 9; //dial 8
                break;

            case 22: //'W'
            case 23: //'X'
            case 24: //'Y'
            case 25: //'Z'
                sum += 10; //dial 9
                break;
        }
    }

    printf("%d", sum);

    return 0;
}
