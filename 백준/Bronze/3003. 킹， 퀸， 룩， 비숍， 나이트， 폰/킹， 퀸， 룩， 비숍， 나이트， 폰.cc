#include <iostream>
using namespace std;

int main()
{
	int arr[6] = { 1,1,2,2,2,8 }, input;

	for (int i = 0; i < 6; i++) {
		cin >> input;

		if (input == arr[i]) {
			cout << "0";
		}
		else {
			cout << arr[i] - input;
		}
		cout << " ";

	}

	return 0;
}