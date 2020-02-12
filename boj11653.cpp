//
// Created by 송지원 on 2020-02-12.
//
// 잘못짠 코드.
// 그냥 소수 고려하지 말고 짜는게 정답...!
//#include <iostream>
//
//bool isPrimeInt[10000001] = {true, true, };
//int primeInts[10000001];
//
//int main() {
//    int N;
//    int primeCount = 0;
//    int index = 0;
//
//    scanf("%d", &N);
//
//    for (int i=2; i<=N; i++) {
//        if (isPrimeInt[i] == false) {
//            primeInts[primeCount++] = i;
//
//            for (int j= i*2; j <= N; j+=i) {
//                isPrimeInt[j] = true;
//            }
//        }
//    }
//
//    if (N == 1) {
//        printf("1\n");
//        return 0;
//    }
//
//    while (N != 1) {
//        if (N%primeInts[index] == 0) {
//            printf("%d\n", primeInts[index]);
//            N /= primeInts[index];
//        }
//        else {
//            index++;
//        }
//    }
//    return 0;
//}