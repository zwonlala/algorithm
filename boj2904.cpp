//
// Created by 송지원 on 2020-03-08.
//

#include <iostream>

#define ABS(X) ((X)<0? (X)*(-1) : (X))

using namespace std;

int num_list[101];
int prime_lists[101][1001];
int avg[1001];

int pow(int a, int b) {
    int ret = 1;
    for (int i=0; i<b; i++) {
        ret *= a;
    }
    return ret;
}


int get_diff(int num) {
    int diff = 0;
    int temp;

    for (int i=0; i<num; i++) {
        for (int j=0; j<1001; j++) {
            temp = avg[j] - prime_lists[i][j];
            diff += ABS(temp);
        }
    }
    return diff;
}

int get_GCD(){
    int ret = 1;
    for (int i=0; i<1001; i++) {
        if (avg[i] > 0) {
            ret *= pow(i, avg[i]);
        }
    }
    return ret;
}

void make_avg_prime(int num) {
    int total;

    for (int i=0; i<1001; i++) {
        total = 0;
        for (int j=0; j<101; j++) {
            total += prime_lists[j][i];
        }
        total /= num;
        avg[i] = total;
    }
}

void check_prime(int index, int num) {
    int prime = 2;

    while (num/prime >= 1 /*&& prime*prime <= num*/) {
        if (num%prime == 0) {
            prime_lists[index][prime]++;
            num /= prime;
        }
        else {
            prime++;
        }
    }
}

void check_prime2(int index, int num) {
    for (int i=2; i*i <= num; i++) {
        while (num%i == 0) {
            prime_lists[index][i]++;
            num /= i;
        }
    }

    if (num > 1) {
        prime_lists[index][num]++;
    }
}

int main() {
    int N;
    scanf("%d", &N);

    for (int i=0; i<N; i++) {
        scanf("%d", &num_list[i]);
        check_prime2(i, num_list[i]);
    }

//    for (int i=0; i<N; i++) {
//        for (int j=0; j<1000; j++) {
//            printf("%d", prime_lists[i][j]);
//        }
//        printf("\n");
//    }
//    printf("\n");

    make_avg_prime(N);
//    for (int i=0; i<1000; i++) {
//        printf("%d", avg[i]);
//    }

    printf("%d %d\n", get_GCD(), get_diff(N)/2);

    return 0;
}