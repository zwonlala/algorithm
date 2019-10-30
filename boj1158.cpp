//
// Created by 송지원 on 2019-10-30.
//

#include "iostream"
#include <queue>

using namespace std;

int main() {
    int N, K, i, j;
    queue<int> que;

    scanf("%d %d", &N, &K);

    for (i=1; i<=N; i++) {
        que.push(i);
    }

    printf("<");
    for (i=0; i<N-1; i++) {
        for (j=0; j<K-1; j++) {
            que.push(que.front());
            que.pop();
        }
        printf("%d, ", que.front());
        que.pop();
    }
    printf("%d>\n", que.front());
    que.pop();

    return 0;
}