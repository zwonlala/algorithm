//
// Created by 송지원 on 2020/05/22.
//

#include <iostream>
#include <vector>
#include <utility>
#include <math.h>
using namespace std;

void set_diff(vector<pair<int, int>> &input) {

    vector<pair<int, int>> :: iterator it;

//    for (it = input.begin(); it!=input.end(); it++) {
//        printf("%d |", it->first);
//    }
//    printf("\n");

    for (it = input.begin(); (it+1)!=input.end(); it++) {
        int diff = ((it+1)->first) - (it->first);
        diff = abs(diff);
        it->second = diff;
    }
    it = input.end() -1;
    it -> second = 300;

    //no problem
    /*printf("<set_diff>\n");
    for (it = input.begin(); it!=input.end(); it++) {
        printf("%d |", it->first);
    }
    printf("\n");
    for (it = input.begin(); it!=input.end(); it++) {
        printf("%d |", it->second);
    }
    printf("\n");*/

    return;
}

int find_smallest(vector<pair<int, int>> &input) {

    int smallest_diff_index;
    int smallest_diff_value = 3000;

    vector<pair<int, int>> ::iterator it;
    for (it=input.begin(); it != input.end()-1; it++) {
        if (it->second < smallest_diff_value) {
            smallest_diff_index = it - input.begin();
            smallest_diff_value = it -> second;
        }
    }

    //no problem
//    printf("<%d/%d>\n", smallest_diff_index, smallest_diff_value);

    return smallest_diff_index;
}

int delete_pair(vector<pair<int, int>> &input, int index) {
    vector<pair<int, int>> ::iterator it1 = input.begin() + index;


    int erase_data1 = input[index].first;
    int erase_data2 = input[index].second;
    int erase_data3 = input[index+1].first;
    int erase_data4 = input[index+1].second;
    //no problem
//    printf("\n\n\n\t\t%d/%d/%d/%d\n", erase_data1, erase_data2, erase_data3, erase_data4);

    int remain_data = erase_data1<erase_data3 ? erase_data1 : erase_data3;

    input.erase(it1);
    input.erase(it1);
    input.insert(it1, make_pair( remain_data, 0));


    //no problem
//    printf("\n\nerase result\n");
//    for (it1 = input.begin(); it1 != input.end(); it1++) {
//        printf("%d | ", it1->first);
//    }
//    printf("\n");
//    for (it1 = input.begin(); it1 != input.end(); it1++) {
//        printf("%d | ", it1->second);
//    }

    return erase_data2;
}

int main() {
    int N;
    int ANS = 0;
    vector<pair<int, int>> v;
    vector<pair<int, int>> :: iterator it;

    scanf("%d", &N);
    for (int i=0; i<N; i++) {
        int temp;
        scanf("%d", &temp);
        v.push_back(make_pair(temp, 0));
    }



    for (int i=0; i<N-1; i++) {
        set_diff(v);
        ANS += delete_pair(v, find_smallest(v));
    }
    printf("%d", ANS);

}