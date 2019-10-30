//
// Created by 송지원 on 2019-10-30.
//

#include <iostream>
#include <string.h>

using namespace std;
char* order[8] = {"push_front", "push_back",
               "pop_front", "pop_back",
               "size", "empty",
               "front", "back"};
int SIZE_OF_ARR = 50000;

int main() {
    int deq[SIZE_OF_ARR];
    int front_i = SIZE_OF_ARR/2;
    int back_i = SIZE_OF_ARR/2+1;

    int T, i, value;

    scanf("%d", &T);
    while (T--) {
        char input[15];
        scanf("%s", input);

        for (i=0; i<8; i++) {
            if (strcmp(input, order[i]) == 0) break;
//            if (strcmp(order[i], input) == 0) break;
        }

        switch (i) {
            case 0:
                scanf(" %d", &value);
                deq[front_i] = value;
                front_i--;
                break;
            case 1:
                scanf(" %d", &value);
                deq[back_i] = value;
                back_i++;
                break;
            case 2:
                if (back_i-front_i == 1) printf("-1\n");
                else {
                    front_i++;
                    printf("%d\n", deq[front_i]);
                    deq[front_i]=0;
                }
                break;
            case 3:
                if (back_i-front_i == 1) printf("-1\n");
                else {
                    back_i--;
                    printf("%d\n", deq[back_i]);
                    deq[back_i]=0;
                }
                break;
            case 4:
                printf("%d\n", back_i-front_i-1);
                break;
            case 5:
                if (back_i-front_i == 1) printf("%d\n", 1);
                else printf("%d\n", 0);
                break;
            case 6:
                if (back_i-front_i == 1) printf("-1\n");
                else {
                    printf("%d\n", deq[front_i+1]);
                }
                break;
            case 7:
                if (back_i-front_i == 1) printf("-1\n");
                else {
                    printf("%d\n", deq[back_i-1]);
                }
                break;
            default:
                break;
        }
    }
    return 0;
}
