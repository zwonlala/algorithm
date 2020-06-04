//
// Created by 송지원 on 2020/06/04.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    string input;
    vector<int> alpha(26);

    cin >> input;
    for(int i=0; i<input.length(); i++) {
        //printf("%d\n", input.at(i) - 'a');
        alpha[input.at(i) - 'a']++;
    }

    for (int ANS: alpha) {
        cout << ANS << " ";
    }
}