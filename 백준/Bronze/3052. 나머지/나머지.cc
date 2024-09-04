#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int arr[42] = { 0, }, i, input, cnt = 0, rest;

	// 10번 입력받기
	for (i = 0; i < 10; i++) {
		cin >> input;
		rest = input % 42;

		if (arr[rest] == 0) {
			arr[rest] = 1;
			cnt++;
		}
	}

	cout << cnt;

	return 0;
}