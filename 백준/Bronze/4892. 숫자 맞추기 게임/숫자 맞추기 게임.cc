#include <iostream>
using namespace std;

int cal(int num) {
   
    num *= 3;
    if (num % 2 == 0) { //짝수
        num /= 2;
        cout << "even ";
    }
    else {
        num = (num + 1) / 2;
        cout << "odd ";
    }
    num = (num * 3) / 9;
    cout << num << "\n";

    return num;
}

int main(void) {
    int num, cnt = 1;

    while (1) {
        cin >> num;

        if (num == 0) break; //0이면 입력 멈추기

        else {
            cout << cnt << ". ";
            cnt++;
            cal(num);
        }
    }

    return 0;
}