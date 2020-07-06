//
// Created by 송지원 on 2020/07/06.
//

#include <iostream>
//#include <math.h>
#include <vector>
#include <queue>
using namespace std;

int T, N, A, B;
vector<int> primeV;
int primeCnt;
int box[1000005];
int dist[1000005];
queue<int> Q;
int CNT = 1000000;

bool isPrime(int input) {
    bool prime = true;
    for (int i=2; i*i<=input; i++) {
        if (input%i == 0) {
            prime = false;
            break;
        }
    }

//    cout << input << "  :  " << prime << "\n";
    return prime;
}

bool hasPrime(int a, int b) {
    primeCnt = 0;
    primeV.clear();
    for (int i=a; i<=b; i++) {
        if (isPrime(i)) {
            primeV.push_back(i);
            primeCnt++;
        }
    }
//    cout << "<<" << primeCnt <<"\n\n\n";
    if (primeCnt>0) return true;
    else return false;
}

int main() {
    cin >> T;
    while (T--) {
        cin >> N >> A >> B;
        if (!hasPrime(A, B)) {
            cout << -1 << "\n";
            continue;
        }
        fill(dist, dist+1000005, -1);
        for (int i=0; i<primeCnt; i++){
            int target = primeV.at(i);
            cout << "target :" << target ;
            queue<int> emptyQ;
            swap(Q, emptyQ);
            Q.push(N);
            dist[N] = 0;

            while (!Q.empty()) {
                auto cur = Q.front();
                cout << "<cur :" << cur <<">\t";
                Q.pop();

                if (cur == target) {
                    CNT = min(CNT, dist[cur]);
                    break;
                }

                for (int j=0; j<4; j++) {
                    int nx;
                    if (j==0) nx = cur/2;
                    else if (j==1) nx = cur/3;
                    else if (j==2) nx = cur+1;
                    else if (j==3 && cur>0) nx = cur-1;

                    if (nx < 0 || nx>1000000) continue;
                    if (dist[nx] >= 0) continue;

                    dist[nx] = dist[cur] + 1;
                    Q.push(nx);
                }
            }
        }
        cout << CNT << "\n";
    }

}