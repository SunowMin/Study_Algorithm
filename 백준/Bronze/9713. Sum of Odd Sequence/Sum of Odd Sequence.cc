#include <iostream>
using namespace std;

int main(void) {
    int n, number, sum;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> number;
        sum = 0;

        for (int j = 1; j <= number; j+=2) {
            sum += j;
          //  cout << j;
        }
        cout << sum << "\n";
    }

    return 0;
}