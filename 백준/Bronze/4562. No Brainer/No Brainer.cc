#include <iostream>
using namespace std;

int main() {
	int input;
	int a, b;

	cin >> input;

	for (int i = 0; i < input; i++) {
		cin >> a >> b;
		if (a >= b) {
			cout<<	"MMM BRAINS" <<"\n";
		}
		else {
			cout << "NO BRAINS" << "\n";
		}
	}

	return 0;
}