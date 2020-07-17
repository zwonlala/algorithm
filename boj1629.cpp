//
// Created by 송지원 on 2020/07/17.
//

#include <iostream>
#include <deque>
using namespace std;
#define X first
#define Y second
long long A, B, C;
long long ANS = 1;
deque<pair<long long, int>> arr;
long long temp;
long long count;
int one_cnt;
int two_cnt;
bool added;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> A >> B >> C;
    while (B--) {
        ANS *= A;
        ANS %= C;

        temp = arr.size();
        for (int i=0; i<temp; i++) {
            if (ANS == arr[i].X) {
                if(arr[i].Y == 1) {
                    arr[i].Y++;
                    two_cnt++;
                    added = true;
                }
                else if (arr[i].Y == 2) {
                    int index =
                }

            }
        }
        arr.push_back(<ANS);
    }
    cout << ANS;
}
