#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int arr[31] = { 0, }, input;

	// 28번 입력 받기
	for (int i = 0; i < 28; i++) {
		cin >> input;
		arr[input] = 1;
	}

	for (int j = 1; j <= 30; j++) {
		if (arr[j] != 1) {
			cout << j << "\n";
		}
	}

	return 0;
}