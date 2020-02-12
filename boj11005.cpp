//
// Created by 송지원 on 2020-02-08.
//

#include <iostream>
#include <string>
#include <stack>

using namespace std;

string toString(long long input) {
    if (0 <= input && input <= 9) {
        return to_string(input);
    }
    else {
        return string(1, (char)(input - 10 + 'A'));
    }
}

int main() {
    long long N;
    int B;
    stack<string> s;

    cin >> N >> B;

    while (N != 0) {
        s.push(toString(N%B));
        N /= B;
    }

    int size = s.size();
    for (int i=0; i<size; i++){
        cout << s.top();
        s.pop();
    }
}