#include <iostream>
using namespace std;

int main()
{
	int alpha[26] = { 0, }, max = 0, index = 0;
	string input, result = "";

	cin >> input;

	if (input.length() == 1) {
		result = char(toupper(input[0]));
		cout << result;
		return 0;
	}

	for (int i = 0; i < input.length(); i++) {
		alpha[int(toupper(input[i])) - 65]++;
	}

	for (int i = 0; i < 26; i++) {
		if (alpha[i] > max) {
			max = alpha[i];
			index = i;
			result = char(index + 65);
		}
	}

	int cnt = 0;
	for (int i = 0; i < 26; i++) {
		if (alpha[i] == max) {
			cnt++;
			if (cnt >= 2) {
				result = "?";
				break;
			}
		}
	}

	cout << result;

	return 0;
}