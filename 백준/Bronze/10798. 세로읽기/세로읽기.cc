#include <iostream>

using namespace std;

int main(void) {

    char array[5][15] = { '\0' };;

    // 다섯 줄 입력받기
    for (int i = 0; i < 5; i++) {
        string input;
        cin >> input;

        // 입력된 문자열을 배열에 복사
        for (int j = 0; j < input.length(); j++) {
            array[i][j] = input[j];
        }
    }

    // 출력하기
    for (int i = 0; i < 15; i++) {
        for (int j = 0; j < 5; j++) {
            if (array[j][i] != NULL) {
                cout << array[j][i];
            }
        }
    }

    return 0;
}