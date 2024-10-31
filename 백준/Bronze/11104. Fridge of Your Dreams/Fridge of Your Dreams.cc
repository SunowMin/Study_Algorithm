#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(void) {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string bin;
        cin >> bin;
        
        long long dec = 0;
        int len = bin.size();
        
        // 이진 문자열을 10진수로 변환
        for (int j = 0; j < len; j++) {
            if (bin[len - j - 1] == '1') { // 오른쪽 끝부터 시작
                dec += pow(2, j);
            }
        }
        
        cout << dec << endl;
    }

    return 0;
}
