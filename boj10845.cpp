//
// Created by 송지원 on 2019-10-29.
//

#include "iostream"
#include <string.h>

using namespace std;

char * order[6]= {"push", "pop", "size", "empty", "front", "back"};
int NUM_OF_ORDER = 6;

int main()
{
    int queue[20000];
    int begin = 0;
    int end = 0;
    int T, i;

    scanf("%d", &T);
    while (T--) {
        char input[7];
        int value;
        scanf("%s", input);

        for (i=0; i<NUM_OF_ORDER; i++) {
            if (strcmp(input, order[i]) == 0) break;
        }

        switch(i) {
            case 0:
                scanf(" %d", &value);
                queue[end] = value;
                end++;
                break;
            case 1:
                if ( begin == end ) printf("-1\n");
                else {
                    printf("%d\n", queue[begin]);
                    queue[begin] = 0;
                    begin ++;
                }
                break;
            case 2:
                printf("%d\n", end-begin);
                break;
            case 3:
                if ( begin == end ) printf("1\n");
                else printf("0\n");
                break;
            case 4:
                if ( begin == end ) printf("-1\n");
                else printf("%d\n", queue[begin]);
                break;
            case 5:
                if ( begin == end ) printf("-1\n");
                else printf("%d\n", queue[end-1]);
                break;
//            default:
//                cout<<"<<"<<input<<endl;
        }
    }
    return 0;
}