//
// Created by 송지원 on 2020/07/19.
//

#include <iostream>
#include <vector>
using namespace std;

string ltrim(const string &);
string rtrim(const string &);

int countGroups(vector<string> related) {
    int inputSize = related.size();
    bool isVisited[inputSize];
    fill(isVisited, isVisited+inputSize, false);
    int groupCnt = 0;

    for (int i=0; i<inputSize; i++) {
        for (int j=0; j<inputSize; j++) {
            // temp = temp || isVisited[j];
            if (i == j && isVisited[i]==false) {
                groupCnt++;
            }

            if (related[i][j] == '1') {
                isVisited[j] = true;
            }
        }
        cout << "[" << groupCnt << "]\n";
    }

    return groupCnt;
}
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string related_count_temp;
    getline(cin, related_count_temp);

    int related_count = stoi(ltrim(rtrim(related_count_temp)));

    vector<string> related(related_count);

    for (int i = 0; i < related_count; i++) {
        string related_item;
        getline(cin, related_item);

        related[i] = related_item;
    }

    int result = countGroups(related);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
            s.begin(),
            find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
            find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
            s.end()
    );

    return s;
}
