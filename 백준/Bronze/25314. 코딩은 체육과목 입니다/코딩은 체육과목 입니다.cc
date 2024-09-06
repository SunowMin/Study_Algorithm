#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int value = n / 4;
	for (int i = 0; i < value; i++) {
		cout << "long ";
	}
	cout << "int";

	return 0;
}