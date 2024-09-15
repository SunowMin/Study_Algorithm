#include <iostream>
using namespace std;

int main()
{
	int arr[6] = { 1,1,2,2,2,8 }, input;

	for (int i = 0; i < 6; i++) {
		cin >> input;

		cout << arr[i] - input << " ";
	}

	return 0;
}