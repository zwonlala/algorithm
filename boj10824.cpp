//
// Created by 송지원 on 2019-11-02.
//

#include "iostream"

using namespace std;

int get_len(int input) {
    int i, temp, cnt=0;

    temp = input;
    for (i=0; i<7; i++) {
        temp /=10;
        if (temp>0) cnt++;
        else return cnt+1;
    }
}
int main () {
    int i1, i2, i3, i4, len;
    long long val1, val2;
    cin >> i1 >> i2 >> i3 >> i4;

    len = get_len(i2);
    val1 = i1;
    while (len--) val1 *= 10;
    val1 += i2;

    len = get_len(i4);
    val2 = i3;
    while (len--) val2 *= 10;
    val2 += i4;

//    cout << val1+val2 << endl;
    printf("%lld\n", val1+val2);
}