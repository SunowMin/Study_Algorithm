#include <iostream>
#include <string>
using namespace std;

int main()
{
	string input;

	cin >> input;

	for (int i = 'a'; i <= 'z'; i++) {
		cout << (int)input.find(i) << ' ';
	}


	return 0;
}