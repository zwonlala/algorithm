//
// Created by 송지원 on 2019-10-25.
//

#include "iostream"
using namespace std;

void print_star(int n){
    int i;
    if (n==1){
        cout << "*"<<endl;
        return;
    }
    else {
        n--;
        while (n--) cout <<"* ";
        cout << "*" <<endl;
        return;
    }
}
int main() {
    int n, i, j;
    cin >> n;

    for (i=0; i<n; i++){
        j=n-1-i;
        while (j--) cout << " ";
        print_star(i+1);
    }
    return 0;
}