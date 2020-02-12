//
// Created by 송지원 on 2020-02-12.
//
#include <iostream>

using namespace std;

int main() {
    int M, N;
    bool isPrimeInt[1000001] = {true, };

    cin >> M >> N;

    for (int i=2; i<=N; i++) {

        //기존 코드는 여기서 배열 안의 값이 "true"이면 continue 하여 패스하고, 값이 "false"일 경우에만 동작하게 하였음.
        //하지만 강의나 다른 사람들 코드를 보면 이 for 문 첫 부분에 if문을 사용하여 값이 "false"일 경우에만 내부 로직이 동작하게 하였음.
        //내가 사용한 continue를 사용하는 방법이랑 첫 부분에 if문을 사용하여 하는 방법이 논리적으로 제어가 도는 방식은 동일한 것 같은데, 계속해서 시간초과가 남
        //내가 모르는 두 방식의 차이가 있는 것인가...? 궁금

        //시간초과가 나는 이유는 아래의 출력부분에서 endl을 사용해서 였음!!!
        //그러므로 continue 써도 통과함!!

//        if (isPrimeInt[i] == true) {
//            continue;
//        }

        if (isPrimeInt[i] == false) {
            if (i >= M) {
                //시간 초과의 문제는 이부분 cout << endl; 이것을 사용해서 뜸.
                //검색해보니 endl은 flush를 수행해서 느림.
                //다음부턴 endl 사용하지 말기
//                cout << i << endl;
                cout << i << "\n";
            }

            for (int j=i*2; j<=N; j+=i) {
                isPrimeInt[j] = true;
            }
        }
    }

    return 0;
}