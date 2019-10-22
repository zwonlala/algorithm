//
// Created by 송지원 on 2019-10-22.
//

#include "iostream"
#include <string.h>

using namespace std;

int main() {
    char input[101];
    int i;

    fgets(input, 100, stdin);
    for (i=0; i<strlen(input); i++){
        cout << input[i];
        if (i%10 == 9){
            cout << endl;
        }
    }
    return 0;
}