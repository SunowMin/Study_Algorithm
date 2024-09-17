#include <iostream>
using namespace std;

int main()
{
	string word;
	int cro = 0, alpha = 0;

	cin >> word;

	for (int i = 0; i < word.length() - 1; i++) {
		if (word[i] == 'c' && word[i + 1] == '=' || word[i + 1] == '-') {
			cro++;
		}
		else if (word[i] == 'd' && word[i + 1] == 'z' && word[i + 2] == '=') {
			cro++;
		}
		else if (word[i] == 'd' && word[i + 1] == '-') {
			cro++;
		}
		else if (word[i] == 'l' && word[i + 1] == 'j') {
			cro++;
		}
		else if (word[i] == 'n' && word[i + 1] == 'j') {
			cro++;
		}
		else if (word[i] == 's' && word[i + 1] == '=') {
			cro++;
		}
		else if (word[i] == 'z' && word[i + 1] == '=') {
			cro++;
		}
		else alpha++;
	}


	cout << alpha+1;

	return 0;
}