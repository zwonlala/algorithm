#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

vector<int> solution(string logs) {
    vector<int> answer;
    int year, month, day, h, m, s;

    istringstream iss(logs);
    while (iss >> year >> month >> day >> h >> m >> s) {
        cout << year << endl;
        cout << month << endl;
        cout << day << endl;
        cout << h << endl;
        cout << m << endl;
        cout << s << endl;

    }
    return answer;
}
int main() {

}