//
// Created by 송지원 on 2020/05/23.
//

#include <iostream>
#include <vector>

using namespace std;

int abs(int input) {
    return input>0 ? input : input * (-1);
}

int get_max_val(vector<int> input) {
    int max_val = -1;
    vector<int> ::iterator it;
    for (it=input.begin(); it!=input.end(); it++) {
        if (abs(*it) > max_val) {
            max_val = abs(*it);
        }
    }
//    printf("%d\n", max_val);
    return max_val;
}

int main() {
    int T, N, M;
    int temp;
    vector<int> v;
    vector<int> ::iterator it;

    scanf("%d", &T);
    while (T--) {
        int count = 0;
        scanf("%d%d", &N, &M);

        for (int i=0; i<N; i++) {
            scanf("%d", &temp);
            v.push_back(temp);
        }

        v[M] *= -1;
        while(true) {
            it = v.begin();
            printf("%d->", *it);
            if (abs(*it) == get_max_val(v)) {
                if (*it < 0) { break; }
                else {
                    v.erase(it);
                    count++;
                }
            }
            else {
                v.push_back(v.front());
                v.erase(it);
            }
        }
        printf("\n%d\n", count + 1);
    }
}