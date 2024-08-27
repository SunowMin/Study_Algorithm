#include <iostream>
using namespace std;

int main(void)
{
    int num1, num2;
    int units, tens, hundreds;

    cin >> num1 >> num2;
    
    units = num1 * (num2 % 10); // 472*5(385의 일의 자리)
    tens = num1 * ((num2 / 10) % 10); // 472*8(385의 십의 자리)
    hundreds = num1 * (num2 / 100); // 472 *3 385의 백의 자리)

    cout << units << '\n' << tens << '\n' << hundreds << '\n';

    cout << units + tens * 10 + hundreds * 100;

    return 0;
}
