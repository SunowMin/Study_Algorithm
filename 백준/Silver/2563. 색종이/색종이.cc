#include <iostream>
using namespace std;

int main(void) {

    // 100*100 흰색 도화지를 0으로 세팅
    char array[100][100] = { 0 };
    int num, x, y, sum = 0;

    cin >> num;
    for (int i = 0; i < num; i++) {
        cin >> x >> y;
        for (int j = x; j < x + 10; j++) {
            for (int k = y; k < y + 10; k++) {
                array[j][k] = 1;
            }
        }
    }

    // 1의 개수 출력
    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 100; j++) {
            if (array[i][j] == 1) {
                sum += 1;
            }
        }
    }
    cout << sum;

    return 0;
}