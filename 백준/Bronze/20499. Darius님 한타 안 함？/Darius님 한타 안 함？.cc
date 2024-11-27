#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

int main(void) {
    int K, D, A;
    string input;
    string strbuffer;
    vector<int> values;
    istringstream ss;

    cin >> input;
    ss.str(input);

    // '/'로 나누어 정수로 변환하여 저장
    while (getline(ss, strbuffer, '/')) {
        values.push_back(stoi(strbuffer));
    }

    // K, D, A 값 설정
    K = values[0];
    D = values[1];
    A = values[2];

    // 조건 확인
    if ((K + A) < D || D == 0) {
        cout << "hasu" << endl;
    } else {
        cout << "gosu" << endl;
    }

    return 0;
}
