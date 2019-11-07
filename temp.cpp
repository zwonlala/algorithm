//
// Created by 송지원 on 2019-11-07.
//

#include "iostream"
using namespace std;

int fibonacci (int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}
int main () {
    int n,i;
    cin >> n;
    for (i=0; i<n; i++) {

        cout << i+1 << " " << fibonacci(i) << endl;
    }


}