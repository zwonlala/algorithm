//
// Created by 송지원 on 2020/05/21.
//

#include <cstdio>
using namespace std;

char DNA[4] = {'A', 'C', 'G', 'T'};

int get_max_value(int input[]) {
    int max_value = -1;
    for (int i=0; i<4; i++) {
        if (input[i] > max_value) {
            max_value = input[i];
        }
    }
    return max_value;
}

int get_max_index(int input[]) {
    int max_value = get_max_value(input);

    for (int i=0; i<4; i++) {
        if (max_value == input[i]){
            return i;
        }
    }
}

int main() {
    int N, M;
    char input[1000][51];
    int value;
    int diff = 0;

    scanf("%d%d ", &N, &M);
    for (int i=0; i<N; i++) {
        for (int j=0; j<M; j++) {
            scanf("%1c", &input[i][j]);
        }
        getchar();
    }

    for (int i=0; i<M; i++) {
        int count[4] = {0, 0, 0, 0};
        int max_index;

        for (int j=0; j<N; j++) {
            value = input[j][i] - 'A';
            if (value == 0) { count[0]++; }
            else if (value == 2) { count[1]++; }
            else if (value == 6) { count[2]++; }
            else { count[3]++; }
        }
        max_index = get_max_index(count);
        printf("%c", DNA[max_index]);

        diff += ( N - get_max_value(count));
    }
    printf("\n%d", diff);
    return 0;
}