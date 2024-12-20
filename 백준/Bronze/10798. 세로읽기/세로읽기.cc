#include <iostream>
#include <string>
using namespace std;

int main() {
    char board[5][15] = { 0 }; // 2차원 배열로 칠판 단어 저장

    // 다섯 줄의 입력 받기
    for (int i = 0; i < 5; i++) {
        string input;
        cin >> input;
        for (int j = 0; j < input.length(); j++) {
            board[i][j] = input[j];
        }
    }

    string result; // 세로로 읽은 결과를 저장할 문자열

    // 최대 15번 반복 (최대 글자수)
    for (int col = 0; col < 15; col++) {
        for (int row = 0; row < 5; row++) {
            // 현재 위치에 글자가 존재하면 추가
            if (board[row][col] != 0) {
                result += board[row][col];
            }
        }
    }

    // 결과 출력
    cout << result << endl;

    return 0;
}