//
// Created by 송지원 on 2020/07/08.
//

//풀다가 모르겠어서 아래 주소 참고하여 풀이
//https://rebas.kr/750


#include <cstdio>
#include <queue>
using namespace std;

const int MAX = 1e6;
int n, k;
int dist[MAX+1];

void bfs() {
    queue<int> q;
    q.push(n);
    int ans=0, cnt=0;
    while (!cnt) {
        int s = q.size();
        while (s--) {
            int x = q.front(); q.pop();
            if (x == k) cnt+=1;
            for (int nx : {x-1, x+1, x*2}) {
                if (nx < 0 || nx > MAX) continue;
                if (dist[nx] && dist[nx] != dist[x]+1) continue;
                q.push(nx);
                dist[nx] = dist[x] + 1;
            }
        }
        ans +=1;
    }
    printf("%d\n%d", ans-1, cnt);
}

int main() {
    scanf("%d %d", &n, &k);
    bfs();
    return 0;
}
