//
// Created by 송지원 on 2020/05/20.
//

#include <cstdio>
using namespace std;

int main() {
    int year, month, day;
    scanf("%d.%d.%d", &year, &month, &day);
    printf("%02d-%02d-%04d", day, month, year);
    return 0;
}