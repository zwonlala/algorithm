//
// Created by 송지원 on 2020-02-11.
//

#include <iostream>
#include <string>
#include <stack>

using namespace std;

long long aToTen(int* input, int a, int count){
    long long res = 0;

    for (int i=0; i<count; i++) {
        res *= a;
        res += input[i];
    }
    return res;
}

stack<int> tenToB(long long input, int b) {
    stack<int> st;
    int res;

    while (input != 0) {
        res = input % b;
        input /= b;
        st.push(res);
    }
    return st;
}

int main() {
    int A, B;
    int m;
    int Am[30];
    long long TEN;
    stack<int> st;
    int s_size;

    cin >> A >> B;
    cin >> m;

    for (int i=0; i<m; i++) {
        cin >> Am[i];
    }

    TEN = aToTen(Am, A, m);
    st = tenToB(TEN, B);
    s_size = st.size();

    while (s_size--) {
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}