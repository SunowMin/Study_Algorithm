#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int X1, Y1, R1;  // 첫 번째 과녁의 중심 좌표와 반지름
    int X2, Y2, R2;  // 두 번째 과녁의 중심 좌표와 반지름

    cin >> X1 >> Y1 >> R1;  // 첫 번째 과녁 입력
    cin >> X2 >> Y2 >> R2;  // 두 번째 과녁 입력

    // 중심 간 거리의 제곱 계산 (제곱근을 사용하지 않아도 비교 가능)
    long long distanceSquared = (long long)(X2 - X1) * (X2 - X1) + (long long)(Y2 - Y1) * (Y2 - Y1);
    long long radiusSum = (long long)(R1 + R2);  // 반지름의 합
    long long radiusSumSquared = radiusSum * radiusSum;  // 반지름 합의 제곱

    if (distanceSquared < radiusSumSquared) {
        cout << "YES" << endl;  // 두 원이 겹치는 경우
    } else {
        cout << "NO" << endl;   // 두 원이 겹치지 않는 경우 (한 점에서 만나거나 안 만남)
    }

    return 0;
}
