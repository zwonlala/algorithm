//
// Created by 송지원 on 2019-10-23.
//

#include "iostream"
using namespace std;

int months[] = {31, 28, 31, 30,
                31, 30, 31, 31,
                30, 31, 30, 31};
char* days[] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};

int main() {
    int x, y, i, day=0;
    scanf("%d %d", &x, &y);
    for (i=0; i<x-1; i++) {
        day += months[i];
    }
    day += y;

    printf("%s", days[day%7]);
}