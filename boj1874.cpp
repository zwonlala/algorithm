//
// Created by 송지원 on 2020/09/07.
//

#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int n;
int temp;

int seq;
vector<int> input = vector<int>(100000);
stack<int> S;
vector<char> ANS;

int input_i = 0;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (int i=1; i<=n; i++) {
        cin >> input[i-1];
        cout
    }


    seq = 1;
    S.push(input[0]);
    ANS.push_back('+');

    while (true) {
        if (S.empty()) {
            cout << "NO"<<"\n";
            return 0;
        }
        if (seq == n+1) {
            break;
        }

        if (input[ans_i] == S.top()) {
            cout << "-"<<endl;
            ans_i++;
            S.pop();
        }
        else if (input[ans_i] > seq) {
            cout << "+" << endl;
            S.push(seq);
            seq++;
        }
    }

    vector<char> ::iterator it;

    for (it=ANS.begin(); it!=ANS.end(); it++) {
        cout << *it;
    }



}