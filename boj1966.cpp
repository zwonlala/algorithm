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


    scanf("%d", &T);
    while (T--) {
        int count = 0;
        scanf("%d%d", &N, &M);

        vector<int> v;
        vector<int> ::iterator it;

        for (int i=0; i<N; i++) {
            scanf("%d", &temp);
            v.push_back(temp);
        }

        v[M] *= -1;

        printf("입력 최종 :");
        for (it=v.begin(); it!=v.end(); it++) {
            printf("%d>>", *it);
        }
        printf("maxval : %d\n", get_max_val(v));

        while(v.size() != 0) {
            it = v.begin();
            printf("size:%d/%d   ", v.size(), *it);
            if (abs(*it) == get_max_val(v)) { //가장 높은 우선 순위가 가장 앞에 있을 경우 => 출력!
                if (*it < 0) {
                    v.erase(it);
                    count++;
                    break;
                }
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
        printf("\n%d\n", count);
    }
}