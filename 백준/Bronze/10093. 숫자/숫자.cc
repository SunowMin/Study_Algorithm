#include <iostream>
using namespace std;

int main(void) {
    unsigned long long a, b;

    cin >> a >> b;

    if (a < b) {
        cout << b - a - 1 << endl;
        for (unsigned long long i = a + 1; i < b; i++) {
            if (i == b - 1) {
                cout << i;
            }
            else {
                cout << i << " ";
            }
        }
    }
    else if (a == b) {
        cout << 0 << endl;
    }

    else {
        cout << a - b - 1 << endl;
        for (unsigned long long i = b + 1; i < a; i++) {
            if (i == a - 1) {
                cout << i;
            }
            else {
                cout << i << " ";
            }
        }
    }


    return 0;
}