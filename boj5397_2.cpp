//
// Created by 송지원 on 2020/07/21.
//

#include <iostream>
using namespace std;

char leftS[1000005];
int leftTop;
int leftCnt;

char rightS[1000005];
int rightTop;
int rightCnt;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    while (N--) {
        string line;
        int lineLen;
        cin >> line;
        lineLen = line.length();

        fill(leftS, leftS+1000005, '\0');
        fill(rightS, rightS+1000005, '\0');
        leftTop = 0;
        leftCnt = 0;
        rightTop = 0;
        rightCnt = 0;

        for (int i=0; i<lineLen; i++) {
            char ch = line[i];

            if (ch == '<'){
                if (leftCnt == 0) continue;
                char top = leftS[leftTop-1];
                leftTop--;
                leftCnt--;
                rightS[rightTop] = top;
                rightTop++;
                rightCnt++;
            }
            else if (ch == '>'){
                if (rightCnt == 0) continue;
                char top = rightS[rightTop-1];
                rightTop--;
                rightCnt--;
                leftS[leftTop] = top;
                leftTop++;
                leftCnt++;
            }
            else if (ch == '-'){
                if (leftCnt == 0) continue;
                leftTop--;
                leftCnt--;
            }
            else {
                leftS[leftTop] = ch;
                leftTop++;
                leftCnt++;
            }
        }

        for (int i=0; i<leftCnt; i++) {
            cout << leftS[i];
        }
        for (int i=rightTop-1; i>=0; i--) {
            cout << rightS[i];
        }
    }
}
