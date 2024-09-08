#include <iostream>
#include <string>
using namespace std;

int main()
{
	int cnt;
	string input;

	cin >> cnt;

	for (int i = 0; i < cnt; i++) {
		cin >> input;
		cout << input.front() << input.back() << "\n";
	}
	
	return 0;
}