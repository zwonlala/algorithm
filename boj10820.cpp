//
// Created by 송지원 on 2019-10-30.
//

#include "iostream"
#include <string.h>

using namespace std;

int main() {
    int count[4], len;
    char input[101];

    while (cin.getline(input, 101, '\n')) {
        if (input[0]==0) break;

        for (int i=0; i<4; i++) {
            count[i] = 0;
        }

        len = strlen(input);
        for (int i=0; i<len; i++) {
            if (input[i] - 'a' >= 0) {
                count[0]++;
            }
            else if (input[i] - 'A' >= 0) {
                count[1]++;
            }
            else if (input[i] - '0' >= 0) {
                count[2]++;
            }
            else if (input[i] - ' ' == 0) {
                count[3]++;
            }
        }
        printf("%d %d %d %d\n", count[0], count[1], count[2], count[3]);
    }
    return 0;
}