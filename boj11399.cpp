//
// Created by 송지원 on 2020/05/21.
//

#include <cstdio>
#include <algorithm>

using namespace std;

int main() {
    int N;
    int time[1000];
    int result = 0;

    scanf("%d", &N);
    for (int i=0; i<N; i++) {
        scanf("%d", &time[i]);
    }
    sort(time, time+N);

    for (int i=0; i<N; i++) {
        result += time[i] * (N-i);
    }
    printf("%d", result);
    return 0;
}