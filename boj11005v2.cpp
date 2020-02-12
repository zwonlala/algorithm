//
// Created by 송지원 on 2020-02-08.
//

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    int n, b;
    string ans = "";

    cin >> n >> b;

    while (n > 0) {
        int r = n % b;

        if (r < 10) {
            ans += (char)(r + '0');
        }
        else {
            ans += (char)(r - 10 + 'A');
        }

        n /= b;
    }

    reverse(ans.begin(), ans.end());
    cout << ans << endl;
    return 0;
}