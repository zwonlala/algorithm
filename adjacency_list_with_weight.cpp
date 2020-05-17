//
// Created by 송지원 on 2020/05/18.
//

#include <cstdio>
#include <vector>

using namespace std;

vector <pair<int, int>> a[10];

int main() {
    int m,n;
    scanf("%d %d", &m, &n);
    for (int i=0; i<m; i++) {
        int u, v, w;
        scanf("%d %d %d", &u, &v, &w);
        a[u].push_back(make_pair(v,w));
        a[v].push_back(make_pair(u,w));
    }
}