#include <iostream>
using namespace std;

int main(void)
{

    int n; // 수열에 저장될 수의 개수
    int a[10001], x, i;

    cin >> n >> x;

    for (i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (i = 0; i < n; i++) {
        if (a[i] < x) {
            cout << a[i] << " ";
        }
    }

    return 0;
}
