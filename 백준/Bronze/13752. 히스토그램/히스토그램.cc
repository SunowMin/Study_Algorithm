#include <iostream>

using namespace std;

int main(void) {
    int num;
    cin >> num;

    for (int i = 0; i < num; i++) {
        int k;
        cin >> k;
        for (int j = 0; j < k; j++) {
            cout << "=";
        }
        cout << "\n";
    }


    return 0;
} 