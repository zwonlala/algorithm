//
// Created by 송지원 on 2019-10-25.
//

#include "iostream"
using namespace std;

int main() {
    int n, i, left, right, center, start, distance, max;
    cin >> n;
    center = n;
    start = n-1;
    left = center;
    right = center;
    distance = right - left - 1;
    max = 2 * n - 1;

    for (i=0; i<n; i++){
        if (i == 0){
            while (start--) cout << " ";
            cout << "*" << endl;
        }
        else if (i == n-1) {
            while (max--) cout << "*";
        }
        else {
            left--;
            right++;
            start = left-1;
            distance = right - left - 1;
            while (start --) cout << " ";
            cout << "*";
            while (distance --) cout << " ";
            cout << "*" << endl;
        }
    }

}