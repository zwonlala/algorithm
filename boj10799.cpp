//
// Created by 송지원 on 2019-10-28.
//

#include "iostream"
#include <string.h>
#include <stack>

using namespace std;

//int main() {
//    int i, bar_cnt=0;
//    char input[100001];
//    stack<int> bars;
//
//    cin >> input;
//
//    for (i=0; i<strlen(input); i++) {
//        if (input[i] == '(') {
//            bars.push(i);
//        }
//        else {
//            if (bars.top()+1 == i){ //레이져
//                bars.pop();
//                bar_cnt += bars.size();
//            }
//            else { //한 막대의 끝
//                bars.pop();
//                bar_cnt += 1;
//            }
//        }
//    }
//    cout << bar_cnt << endl;
//    return 0;
//}
int main() {
    int bar_cnt=0, ans=0;
    int bar_recently, i;
    char input[100001];

    cin >> input;

    for (i=0; i<strlen(input); i++) {
        if (input[i] == '(') {
            bar_cnt++;
            bar_recently = i;
        }
        else {
            if (bar_recently+1 == i){ //레이져
                bar_cnt--;
                ans += bar_cnt;
            }
            else {
                bar_cnt--;
                ans += 1;
            }
        }
    }
    cout << ans << endl;
    return 0;
}






















