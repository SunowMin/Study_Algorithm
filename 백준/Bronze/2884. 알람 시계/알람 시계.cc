#include <iostream>
using namespace std;

int main(void)
{
    int h, m;
    cin >> h >> m;

    if (m >= 45) {
        if (h != 0) { 
        cout << h << " " << m - 45;
    }
        else if (h == 0) {
            cout << h << " " << m - 45;
        }
        else {
            h = 23;
            cout << h << " " << m - 45;
        }
    }
    else {
        if (h != 0) {
            cout << h - 1 << " " << m + 60 - 45;
        }
        else {
            h = 23;
            cout << h << " " << m + 60 - 45;
        }
    }
     

    return 0;
}
