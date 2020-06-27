//
// Created by 송지원 on 2020/06/27.
//

//바킹독님 강 덱 deque_example 코드
//바킹독님은 옆에 주석 처리 하신대로 짜셨는데 듯
// 그렇게 했을때 for문 같은 거 돌때 i = head; i != tail 같이 쓸수 있어서 더 좋은듯!!
#include <iostream>
using namespace std;

const int MAX = 1000005;
int dat[2*MAX + 1];
int head = MAX, tail = MAX;

void push_front(int val) {
    dat[head--] = val; //dat[--head] = val;
}

void push_back(int val) {
    dat[++tail] = val; //dat[tail++] = val;
}

void pop_front() {
    head++;
}

void pop_back() {
    tail--;
}

int front() {
    return dat[head+1];
}

int back() {
    return dat[tail];
}

void test() {
    push_back(30); // 30
    cout << front() << '\n'; // 30
    cout << back() << '\n'; // 30
    push_front(25); // 25 30
    push_back(12); // 25 30 12
    cout << back() << '\n'; // 12
    push_back(62); // 25 30 12 62
    pop_front(); // 30 12 62
    cout << front() << '\n'; // 30
    pop_front(); // 12 62
    cout << back() << '\n'; // 62
}

int main() {
    test();
}