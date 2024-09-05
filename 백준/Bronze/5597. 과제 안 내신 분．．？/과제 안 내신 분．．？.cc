#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int arr[31]= {0, }, input;

	for (int i = 0; i < 28; i++) {
		cin >> input;
		arr[input] = 1;
	}

	for (int i = 1; i <= 30; i++) {
		if (arr[i] != 1) {
			cout << i << "\n";
		}
	}
	return 0;
}