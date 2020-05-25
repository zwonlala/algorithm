//
// Created by 송지원 on 2020/05/25.
//

#include <iostream>
#include <queue>

using namespace std;

int main() {
    int N, M, T;
    scanf("%d", &T);

    while (T--) {
        int count = 0;
        scanf("%d%d", &N, &M);
        queue<pair<int, int>> q;
        priority_queue<int> pq;

        for (int i=0; i<N; i++) {
            int temp;
            scanf("%d", &temp);
            q.push({i, temp});
            pq.push(temp);
        }

        while (true) {
            if (q.front().second == pq.top()) {
                count ++;
                if (q.front().first == M) { break; }
                q.pop();
                pq.pop();
            }
            else {
                q.push(q.front());
                q.pop();
            }
        }

        printf("%d\n", count);
    }
}