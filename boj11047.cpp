//
// Created by 송지원 on 2020/05/21.
//

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, K;
    int count = 0;
    vector<int> v;
    vector<int>::reverse_iterator rit;

    scanf("%d%d", &N, &K);
    for (int i=0; i<N; i++) {
        int temp;
        scanf("%d", &temp);
        v.push_back(temp);
    }

    for(rit = v.rbegin(); rit != v.rend(); ++rit) {
        count += (K / *rit);
        K %= *rit;
    }
    printf("%d", count);
}