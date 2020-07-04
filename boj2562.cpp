//
// Created by 송지원 on 2020/07/04.
//
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<pair<int,int>> V;
    int temp;
    int max = -1;
    int maxIndex;
    for (int i=0; i<9; i++) {
        cin >> temp;
        if (temp > max) {
            max = temp;
            maxIndex = i;
        }
        V.push_back({temp, i+1});
    }
    cout << V.at(maxIndex).first << "\n" <<V.at(maxIndex).second;
}
