//
// Created by 송지원 on 2020/07/19.
//

#include <iostream>
using namespace std;

int main() {
    for (int i=0; i<100; i++) {
        for (int j=0; j<100; j++) {
            char temp;
            cin >> temp;
//            cout <<"["<<temp<<"]";
            if (temp == '1') cout << (j+1) <<" ";
        }
        cout << endl;
    }
}

//int main() {
//    string str;
//    cin >> str;
//    cout <<str.size();
//}