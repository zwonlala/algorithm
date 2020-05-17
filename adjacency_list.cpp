//
// Created by 송지원 on 2020/05/18.
//

#include <cstdio>
#include <vector>
using namespace std;

vector<int> a[10];

int main() {

    int n, m;
    scanf("%d %d", &n, &m);

    for (int i=0; i<m; i++){
        int u, v;
        scanf("%d %d", &u, &v);
        a[u].push_back(v);
        a[v].push_back(u);
    }
}