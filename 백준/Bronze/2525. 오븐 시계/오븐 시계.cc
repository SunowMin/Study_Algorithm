#include <iostream>
using namespace std;

int main(void)
{

    int current_hour, current_minute, current_time, cooking_time, end_hour, end_minute;

    cin >> current_hour >> current_minute >> cooking_time;

    // 현재 시간을 분 단위로 변환
    current_time = current_hour * 60 + current_minute;
    // 현재 시간에 요리하는 데 걸린 시간 더하기
    current_time += cooking_time;

    // 분 단위에서 시,분 단위로 변환해주기
    end_hour = current_time / 60;
    end_minute = current_time % 60;

    if (end_hour >= 24) {
        end_hour -= 24;
    }
 
    cout << end_hour << " " << end_minute;

    return 0;
}
