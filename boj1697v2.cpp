//
// Created by 송지원 on 2020/07/01.
//

#include <iostream>
#include <queue>
using namespace std;
int dist[100003];
int n,k;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> k;
    fill (dist, dist+100002, -1);
    dist[n] = 0;
    queue<int> Q;
    Q.push(n);
    while (dist[k] == -1) {
        int cur = Q.front();
        Q.pop();
        for (int nxt : {cur-1, cur+1, cur*2}) {
            if (nxt < 0 || nxt > 100000) continue;
            if (dist[nxt] != -1) continue;
            dist[nxt] = dist[cur] + 1;
            Q.push(nxt);
        }
    }
    cout << dist[k];
}