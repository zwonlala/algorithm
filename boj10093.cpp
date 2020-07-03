//
// Created by 송지원 on 2020/07/03.
//

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    unsigned long long a, b;
    unsigned long long diff;
    cin >> a >> b;
    if (a > b) swap(a, b);
    diff = b - a;

    if (diff>0){
        cout << diff -1<< '\n';
        for (unsigned long long i=1; i<diff; i++){
            cout << a + i <<" ";
        }
    }
    else {
        cout << 0;
    }
}