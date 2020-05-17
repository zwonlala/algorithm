//
// Created by 송지원 on 2020-05-18.
//

//#include <iostream>
#include <cstdio>
#include <vector>

int a[10][10];

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    for (int i=0; i<m; i++) {
        int u, v;
        scanf("%d %d", &u, &v);
        a[u][v] = a[v][u] = 1;

        //가중치 있는 버젼
//        int u, v, w;
//        scanf("%d %d %d", &u, &v, &w);
//        a[u][v] = a[v][u] = w;
    }

}