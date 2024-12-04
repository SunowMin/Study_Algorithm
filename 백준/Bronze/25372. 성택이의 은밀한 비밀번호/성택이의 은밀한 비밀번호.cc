#include <iostream>
#include <string>

using namespace std;

int main(void) {
    int n;

    cin >> n;

    for (int i = 0; i < n; i++) {
        string temp;
        cin >> temp;
        if (temp.length() <= 9 && temp.length() >= 6) {
            cout << "yes"<<"\n";
        }
        else {
            cout << "no" << "\n";
        }
    }

    return 0;
}