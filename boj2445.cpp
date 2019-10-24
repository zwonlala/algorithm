//
// Created by 송지원 on 2019-10-24.
//

#include "iostream"
using namespace std;

int main() {
    int n, i, j;
    cin >> n;
    for (i=0; i<n; i++) {
        for (j=0; j<i+1; j++) cout <<"*";
        for (j=0; j<2*(n-1-i); j++) cout <<" ";
        for (j=0; j<i+1; j++) cout <<"*";
        cout << endl;
    }
    for (i=n-2; i>-1; i--) {
        for (j=0; j<i+1; j++) cout <<"*";
        for (j=0; j<2*(n-1-i); j++) cout <<" ";
        for (j=0; j<i+1; j++) cout <<"*";
        cout << endl;
    }
}