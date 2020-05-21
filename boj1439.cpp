//
// Created by 송지원 on 2020/05/21.
//

#include <iostream>
#include <string.h>

using namespace std;

int main() {
    char input[1000000];
    int odd, even = 0;
    int len;


    scanf("%s", input);
    len = strlen(input);

    int start = input[0];
    bool tof = true;

    for (int i=1; ; i++) {
//        printf("%d/start:%c/ input[i]:%c/ tof:%d/\n", i, start,input[i], tof);
        if (start == input[i]) {
            continue;
        }
        else {
            if (tof) { odd++; }
            else { even++; }

            start = input[i];
            tof = !tof;
        }

        if (i == len) {
            break;
        }
    }

//    printf("%d/%d\n", odd, even);
    printf("%d", odd<even? odd: even);
    return 0;
}