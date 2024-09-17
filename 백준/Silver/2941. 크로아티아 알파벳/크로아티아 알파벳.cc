#include <iostream>
#include <string>
using namespace std;

int count(string str) {
	string alpha[8] = { "c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z=" };

	for (int i = 0; i < 8; i++) {
		while (1) {
			// find : 시작 위치를 리턴
			if (str.find(alpha[i]) != -1) {
				// replace (교체원하는 문자열의 위치, 교체원하는 문자열의 길이, 새로운 문자열)
				str.replace(str.find(alpha[i]), alpha[i].length(), "*");
			}
			else break;
		}
	}

	return str.length();
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string word;
	int cro = 0;

	cin >> word;

	cout << count(word);

	return 0;
}