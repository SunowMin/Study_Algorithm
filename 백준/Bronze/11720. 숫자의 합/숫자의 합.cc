#include <iostream>
using namespace std;

int main()
{
	int cnt = 0 , sum = 0;
	string input;

	cin >> cnt >> input;

	for (int i = 0; i < cnt; i++) {
		sum += input[i] - '0';
	}

	cout << sum;

	return 0;
}