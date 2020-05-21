//
// Created by 송지원 on 2020/05/21.
//

#include <iostream>
#include <deque>

using namespace std;

//void print_dq(deque<int> input) {
//
//    printf("<");
//    for (int i=0; i<input.size(); i++) {
//        printf("%d", input[i]);
//    }
//    printf(">\n");
//    return;
//}

int main() {
    deque<int> dq;
    deque<int>::iterator it;
    int input[10];
    int N;

    scanf("%d", &N);
//    printf("[[%d]]", N);
    for (int i=0; i<N; i++) {
        scanf("%d", &input[i]);
//        printf("<%d>", input[i]);
    }

    dq.push_front(N);
    for (int i=N-2; i>=0; i--) {
        it = dq.begin();
        it += input[i];
        int temp_value = i+1;
        dq.insert(it, temp_value);
//        print_dq(dq);

    }

    for (int i=0; i<N; i++) {
        printf("%d ", dq[i]);
    }
    return 0;
}
