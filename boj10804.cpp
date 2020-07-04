//
// Created by 송지원 on 2020/07/04.
//

#include <iostream>
#include <algorithm>
using namespace std;

int arr[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10,
               11, 12, 13, 14, 15, 16, 17, 18, 19, 20};

void swap(int a, int b) {
    int temp;
    int diff = b-a;
    for (int i=0; i<(diff+1)/2; i++) {
        temp = arr[a];
        arr[a] = arr[b];
        arr[b] = temp;
        a++, b--;
    }
}
int main() {
    int a, b;
    for (int i=0; i<10; i++) {
        cin >> a >> b;
        swap(a-1, b-1);
    }
    for (auto x : arr){
        cout << x << " ";
    }
    return 0;
}