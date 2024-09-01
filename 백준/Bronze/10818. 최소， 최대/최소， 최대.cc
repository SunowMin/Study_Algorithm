#include <iostream>
using namespace std;

int main()
{
	int n, min = 1000000, max = -1000000, input;
	cin >> n;

	int arr[100000];

	for (int i = 0; i < n; i++) {
		cin >> input;
		if (input < min) {
			min = input;
		}
		if (input > max) {
			max = input;
		}
	}

	cout << min << " " << max;

	return 0;
}