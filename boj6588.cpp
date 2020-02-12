//
// Created by 송지원 on 2020-02-12.
//

#include <iostream>

using namespace std;

#define ZERO 0

int main() {
    int N;
    bool isPrimeInt[1000001] = { true, true, }; //if its value is "false" then index value is prime number
    int primeInts[1000000];
    int primeCount = 0;

    for (int i=2; i<=1000000; i++) {
        if (isPrimeInt[i] == false) {
            primeInts[primeCount++] = i;

            for (int j=i*2; j<=1000000; j+=i) {
                isPrimeInt[j] = true;
            }
        }
    }

    while (true) {
        //첫번째 시도에 시간초과 난게 N 입력받을 때, cin 사용해서 그런듯
//        cin >> N;
        scanf("%d", &N);
        int a, b;
        bool find = false;

        if (N == ZERO) {
//            break;
            return 0;
        }

        for (int i=0; i<primeCount; i++) {
            a = primeInts[i];
            b = N - a;
            if (isPrimeInt[b] == false) {
                printf("%d = %d + %d\n", N, a, b);
                find = true;
                break;
            }
        }

        if (!find) {
            printf("Goldbach's conjecture is wrong.\n");
        }
    }
//    return 0;
}