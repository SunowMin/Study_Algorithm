#include <iostream>

using namespace std;

int main(void) {

    int x1, y1, r1, x2, y2, r2;

    cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;


    // 과녁의 중심을 기준으로 두 과녁의 거리 구하기
    long long centerDistance, xDistance, yDistance;
    xDistance = x1 - x2;
    yDistance = y1 - y2;

    centerDistance = (long long)(xDistance * xDistance) + (long long)(yDistance * yDistance);

    // 겹치려면, 중심사이거리 < 두 반지름의 합
    if (centerDistance < (long long)(r1 + r2) * (r1 + r2)) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }


    return 0;
}