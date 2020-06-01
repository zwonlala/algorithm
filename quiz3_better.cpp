//
// Created by 송지원 on 2020/06/01.
//

#include <iostream>

using namespace std;

int func3(int N) {
    for (int i=1; i*i <= N; i++) {
        if (i*i == N) return 1;
    }
    return 0;
}
int main(){
    int N;
    scanf("%d", &N);
    printf("%d", func3(N));
    return 0;
}