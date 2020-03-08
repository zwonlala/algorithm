//
// Created by 송지원 on 2020-03-08.
//

//exit code 11 뜸. 출
// 뭔가 알아봤는데 sort() 함 수 내에서 자신을 호출할 때,
// 두번째 호출에서 sort(mid +1, end) 이렇게 호출해야 하는데
// 그냥 mid를 호출함.
// typo error!

#include <iostream>

using namespace std;

int a[1000000];
int b[1000000];

//void swap(int &x, int &y) {
//    int z = x;
//    x = y;
//    y = z;
//}

void merge( int start, int end) {
    int mid = (start + end)/2;
    int i = start;
    int j = mid + 1;
    int k = 0;

    while (i<=mid && j<=end) {
        if (a[i] <= a[j]) {
            b[k++] = a[i++];
        } else {
            b[k++] = a[j++];
        }
    }

    while (i <= mid) {
        b[k++] = a[i++];
    }

    while (j <= end) {
        b[k++] = a[j++];
    }

    for (int i=start; i<=end; i++) {
        a[i] = b[i-start];
    }
}

void sort(int start, int end) {
    if (start == end) {
        return;
    }

    int mid = (start + end)/2;
    sort(start, mid);
    sort(mid+1, end);
    merge(start, end);
}

int main() {
    int n;
    scanf("%d", &n);

    for (int i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }

    sort(0, n-1);

    for (int i=0; i<n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}