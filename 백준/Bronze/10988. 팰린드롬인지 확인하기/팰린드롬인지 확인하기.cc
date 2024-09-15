#include <iostream>
using namespace std;

int main()
{
	string str;
	int leng;
	int res = 0;

	cin >> str;

	leng = str.length();
	//cout << leng << "\n" << leng/ 2 << "\n";

	if (leng == 1) {
		res = 1;
	}
	else {
		for (int i = 0; i < leng / 2; i++) {
			if (str[i] != str[leng - i - 1]) {
				res = 0;
				break;
			}
			else res = 1;
		}
	}

	cout << res;

	return 0;
}