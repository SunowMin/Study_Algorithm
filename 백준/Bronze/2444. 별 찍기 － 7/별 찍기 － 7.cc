#include <iostream>
using namespace std;

int main()
{
	int n, star = 1;
	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = n - i - 2; j >= 0; j--) {
			cout << " ";
		}
		for (int k = 0 ; k < i*2+1; k++) {
			cout << "*";
		}
		cout << "\n";
	}

	for (int i = 0; i < n-1; i++) {
		for (int j = 0; j < i + 1; j++) {
			cout << " ";
		}
		for (int k = 0; k < n * 2 - (i + 1) * 2 - 1; k++) {
			cout << "*";
		}
		cout << "\n";
	}

	return 0;
}