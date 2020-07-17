//
// Created by 송지원 on 2020/07/17.
//

#include <iostream>
using namespace std;

int toggle(int input, int input2) {
    if (input*input2 == 2) return 3;
    else if (input*input2 == 3) return 2;
    else return 1;
}

//int toggle2(int input) {
//    if (input == 3) return 1;
//    else return 1;
//}

void print_route(int start, int end, int count) {
    if (count == 1) {
        cout << start << " " << end << '\n';
        return;
    }

    print_route(start, toggle(start, end), count-1);
    cout << start << " " << end << '\n';
    print_route(toggle(start, end), end, count-1);
}

int print_count(int count) {
    if (count==1) return 1;
    return 2*print_count(count-1)+1;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    cout << print_count(N) << '\n';
    print_route(1, 3, N);
    return 0;
}