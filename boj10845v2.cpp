x2//
// Created by 송지원 on 2019-10-29.
//

#include "iostream"
#include <string.h>
#include "queue"

using namespace std;

char * order[6]= {"push", "pop", "size", "empty", "front", "back"};
int NUM_OF_ORDER = 6;

int main() {

    int T, i;
    scanf("%d", &T);
    queue<int> queue1;

    while (T--){
        char input[6];
        int value;

        scanf("%s", input);
        for (i=0; i<NUM_OF_ORDER; i++) {
            if (strcmp(input, order[i]) == 0)
                break;
        }

        switch (i) {
            case 0:
                scanf(" %d", &value);
                queue1.push(value);
                break;

            case 1:
                if (queue1.empty()) printf("-1\n");
                else {
                    printf("%d\n", queue1.front());
                    queue1.pop();
                }
                break;

            case 2:
                printf("%d\n", queue1.size());
                break;

            case 3:
                if (queue1.empty()) printf("1\n");
                else printf("0\n");
                break;

            case 4:
                if (queue1.empty()) printf("-1\n");
                else printf("%d\n", queue1.front());
                break;

            case 5:
                if (queue1.empty()) printf("-1\n");
                else printf("%d\n", queue1.back());
                break;
        }
    }
    return 0;
}