//
// Created by 송지원 on 2019-10-22.
//

#include "iostream"
using namespace std;

int main() {
    char arr[101];

    while ( fgets(arr, 100, stdin) != NULL ) {
        cout << arr;
    }
    return 0;
}