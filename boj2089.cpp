//
// Created by 송지원 on 2020-02-11.
//

#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {
    long long N;
    long long b = 2;
    long long nb = -2;
    int res;
    stack<int> st;

    cin >> N;

    if (N == 0) {
        cout << "0" << endl;
        return 0;
    }

    while (N!=0) {
        if (N > 0) {
            res = N % b;
            N /= b;
            N *= -1;
        }
        else {
            res = N % nb;

            if (res == 0) {
                N /= nb;
            }
            else {
                res *= -1;
                N /= nb;
                N += 1;
            }
        }
        st.push(res);
    }

    int size = st.size();
    while (size--) {
        cout << st.top();
        st.pop();
    }
    cout << endl;
    return 0;
}