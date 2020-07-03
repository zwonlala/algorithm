//
// Created by 송지원 on 2020/07/03.
//

#include <iostream>
using namespace std;

int main(){
    int zcnt;
    int temp;
    for (int i=0; i<3; i++) {
        zcnt = 0;
        for (int j=0; j<4; j++) {
            cin >> temp;
            if (temp == 0) zcnt++;
        }
        switch(zcnt) {
            case 0:
                cout << 'E' << "\n";
                break;
            case 1:
                cout << 'A' << "\n";
                break;
            case 2:
                cout << 'B' << "\n";
                break;
            case 3:
                cout << 'C' << "\n";
                break;
            case 4:
                cout << 'D' << "\n";
                break;
        }
    }
}