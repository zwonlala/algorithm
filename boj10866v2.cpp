//
// Created by 송지원 on 2019-10-30.
//

#include "iostream"
#include <deque>
#include <string.h>

using namespace std;
char* order[8] = {"push_front", "push_back",
                  "pop_front", "pop_back",
                  "size", "empty",
                  "front", "back"};

int main () {
    int T, i;
    deque<int> deq;

    scanf("%d", &T);
    while (T--) {
        char input[15];
        int val;
        scanf("%s", input);

        for (i = 0; i < 8; i++) {
            if (strcmp(input, order[i]) == 0) break;
        }
        switch (i) {
            case 0:
                scanf("%d", &val);
                deq.push_front(val);
                break;

            case 1:
                scanf("%d", &val);
                deq.push_back(val);
                break;

            case 2:
                if (deq.empty()) printf("-1\n");
                else {
                    printf("%d\n", deq.front());
                    deq.pop_front();
                }
                break;

            case 3:
                if (deq.empty()) printf("-1\n");
                else {
                    printf("%d\n", deq.back());
                    deq.pop_back();
                }
                break;

            case 4:
                printf("%d\n", deq.size());
                break;

            case 5:
                if (deq.empty()) printf("1\n");
                else printf("0\n");
                break;

            case 6:
                if (deq.empty()) printf("-1\n");
                else printf("%d\n", deq.front());
                break;

            case 7:
                if (deq.empty()) printf("-1\n");
                else printf("%d\n", deq.back());
                break;
            default:
                break;
        }
    }
    return 0;
}














