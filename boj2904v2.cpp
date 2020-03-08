//
// Created by 송지원 on 2020-03-08.
//

#include <iostream>
#define ABS(X) ((X)<0 ? (X)*(-1) : (X))

using namespace std;

int pn;
int primes[1000];

int numbers[101];
int number_primes[101][1000];
int avg_primes[1000];

int get_avg_diff(int num) {
    int ret = 0;
    int temp;

    for (int i=0; i<num; i++) {
        for (int j=0; j<pn; j++) {
            temp = avg_primes[j] - number_primes[i][j];
            ret += ABS(temp);
        }
    }
    return ret;
}

int pow(int a, int b) {
    int ret = 1;
    while (b--) {
        ret *= a;
    }
    return ret;
}

int get_avg_gcd() {
    int ret = 1;

    for (int i=0; i<pn; i++) {
        ret *= pow(primes[i], avg_primes[i]);
    }
    return ret;
}

void get_avg_primes(int num) {
    int sum;

    for (int i=0; i<pn; i++) {
        sum = 0;
        for (int j=0; j<num; j++) {
            sum += number_primes[j][i];
        }
        avg_primes[i] = sum / num;
    }
}



void get_number_primes(int index, int num) {
    for (int i=0; i<pn; i++) {
        if (num % primes[i] == 0) {
            while (num / primes[i] == 0) {
                number_primes[index][i]++;
                num /= primes[i];
            }
        }

    }
}

void get_primes() {
    pn = 0;
    bool c[1000];
    int n = 1000;

    for (int i=2; i <= n; i++) {
        if (c[i] == false) {
            primes[pn++] = i;
            for (int j = i*i; j<= n; j+= i) {
                c[j] = true;
            }
        }

    }
}

int main() {
    get_primes();

    for (int i=0; i<pn; i++) {
        printf("%d ", primes[i]);
    }

//    int N;
//
//    scanf("%d", &N);
//
//    for (int i=0; i<N; i++) {
//        scanf("%d", &numbers[i]);
//        get_number_primes(i, numbers[i]);
//    }
//
//    get_avg_primes(N);
//
//    printf("%d %d\n", get_avg_gcd(), get_avg_diff(N)/2);
//    return 0;
}