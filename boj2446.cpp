//
// Created by 송지원 on 2019-10-24.
//

#include "iostream"
using namespace std;

void print(int n, int i){
    int j;
    for (j=0; j<i; j++) cout<<" ";
    for (j=0; j<2*(n-i)-1; j++) cout<<"*";
    cout << endl;
}
int main() {
    int n, i;
    cin>>n;
    for (i=0; i<n; i++) print(n, i);
    for (i=n-2; i>-1; i--) print(n, i);
    return 0;
}