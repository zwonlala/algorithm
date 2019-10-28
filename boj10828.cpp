//
// Created by 송지원 on 2019-10-26.
//

#include "iostream"
#include <string.h>
using namespace std;

const int ARR_SIZE = 10001;
const char* PUSH_OPR = "push";
const char* POP_OPR = "pop";
const char* SIZE_OPR = "size";
const char* EMPTY_OPR = "empty";
const char* TOP_OPR = "top";

void push(int* arr, int* count, int x) {
    arr[*count] = x;
    (*count)++;
    return;
}

void pop (int* arr, int* count) {
    if (*count == 0) cout << "-1" << endl;
    else {
        cout << arr[*count-1] << endl;
        (*count)--;
    }
    return;
}

void size (int* arr, int* count) {
    cout << *count << endl;
    return;
}

void empty (int* arr, int* count) {

    if (*count == 0) cout << "1" << endl;
    else cout << "0" << endl;
    return;
}

void top (int* arr, int* count) {

    if (*count == 0) cout << "-1" << endl;
    else cout << arr[*count -1] << endl;
    return;
}



int main() {
    int arr[ARR_SIZE];
    int count=0;
    int n;
    char temp[15];
    int x;

    cin >> n;
    while (n--) {
        cin >> temp;
        if (strcmp(temp, PUSH_OPR) == 0) {
            scanf("%d", &x);
            push(arr, &count, x);
        }
        else if (strcmp(temp, POP_OPR) == 0) {
            pop(arr, &count);
        }
        else if (strcmp(temp, SIZE_OPR) == 0) {
            size(arr, &count);
        }
        else if (strcmp(temp, EMPTY_OPR) == 0) {
            empty(arr, &count);
        }
        else if (strcmp(temp, TOP_OPR) == 0) {
            top(arr, &count);
        }
    }
}