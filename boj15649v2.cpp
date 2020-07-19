//
// Created by 송지원 on 2020/07/19.
//

//직접 풀어보려다가 잘 안돼서 바킹독님 강의 코드 보고 풂. func 함수의 if문에 걸리지 않고 for문이 돌 때 왜 index가 1부터 시작하는지 모르겠다...
//-> 주석보고 이해함!!
#include <iostream>
using namespace std;

int N, M;
int arr[10];
bool isused[10];

//func(k)는 현재까지 k개까지의 수를 고른 상황에서 arr[k](즉, k+1 번째 수)를 정하는 함수!!
void func(int k) {
    if (k == M) {
        for (int i=0; i<M; i++)
            cout << arr[i] << " ";
        cout << '\n';
        return;
    }
    for (int i=1; i<=N; i++) { //1부터 N 까지의 수에 대해
        if (!isused[i]) { //아직 사용하지 않았다면
            arr[k] = i; //k 번째 수로 i를 쓰고
            isused[i] = 1; //사용했다고 표시하고
            func(k+1); //다음수를 정하러 한단계 더 내려감
            isused[i] = 0; //이게 포인트!!! 이 부분은 k번째 수로 i를 쓴 모든 경우에 대래 다 확인한 이후이니, i를 이제 사용되지 않았다고 명시함!!
            //근데 위의 "arr[k] = i"는 상관 없는건가...?
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    func(0);
}