#include <iostream>
using namespace std;

int main()
{
	int max = 0, input, order;
	int arr[9];

	for (int i = 0; i < 9; i++) {
		cin >> input;
		arr[i] = input;

		if (input > max) {
			max = input;
		}
	}

	for (int i = 0; i < 9; i++) {
		if (arr[i] == max) {
			order = i;
		}
	}

	cout << max << "\n"<<order+1;

	return 0;
}