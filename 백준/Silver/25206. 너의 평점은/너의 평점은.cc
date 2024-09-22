#include <iostream>
#include <string>
using namespace std;


int main(){
	int cnt = 0;
	float totalsum = 0, sum = 0;
	string input[60];

	for (int i = 0; i < 60; i++) {
		cin >> input[i];
		// 세번째 입력된 값만 확인
		if (i % 3 == 2) {
			// 만약 등급이 P가 아니면
			if (input[i] != "P") {
				if (input[i] == "A+") {
					totalsum += (4.5 * stoi(input[i - 1]));
					sum += stoi(input[i - 1]);
					cnt++;
					
				}
				else if (input[i] == "A0") {
					totalsum += (4 * stoi(input[i - 1]));
					sum += stoi(input[i - 1]);
					cnt++;
				}
				else if (input[i] == "B+") {
					totalsum += (3.5 * stoi(input[i - 1]));
					sum += stoi(input[i - 1]);
					cnt++;
				}
				else if (input[i] == "B0") {
					totalsum += (3 * stoi(input[i - 1]));
					sum += stoi(input[i - 1]);
					cnt++;
				}
				else if (input[i] == "C+") {
					totalsum += (2.5 * stoi(input[i - 1]));
					sum += stoi(input[i - 1]);
					cnt++;
				}
				else if (input[i] == "C0") {
					totalsum += (2 * stoi(input[i - 1]));
					sum += stoi(input[i - 1]);
					cnt++;
				}
				else if (input[i] == "D+") {
					totalsum += (1.5 * stoi(input[i - 1]));
					sum += stoi(input[i - 1]);
					cnt++;
				}
				else if (input[i] == "D0") {
					totalsum += (1 * stoi(input[i - 1]));
					sum += stoi(input[i - 1]);
					cnt++;
				}
				// 등급이 F인 경우
				else {
					totalsum += (0 * stoi(input[i - 1]));
					sum += stoi(input[i - 1]);
					cnt++;
				}
			}
		}
	}
	// cout << sum << "\n" << totalsum << "\n" << cnt << "\n";

	cout << totalsum / sum;

	return 0;
}