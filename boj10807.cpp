//
// Created by 송지원 on 2020/07/06.
//

#include <iostream>
using namespace std;

int N;
int v;
int cnt[205];
int main() {
    cin >> N;
    int temp;
    for (int i=0; i<N; i++) {
        cin >> temp;
        cnt[temp+100]++;
    }
    cin >> v;
    cout << cnt[v+100];

}