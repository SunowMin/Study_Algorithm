#include <iostream>
using namespace std;

int main()
{
	long total_cost, total_item, cost, item, sum = 0;
	cin >> total_cost >> total_item;

	for (int i = 0; i < total_item; i++) {
		cin >> cost >> item;
		sum += cost * item;
	}

	if (total_cost == sum) {
		cout << "Yes";
	}
	else {
		cout << "No";
	}

	return 0;
}