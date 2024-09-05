#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n, arr[1001], input;
	double sum = 0;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int* max_ptr = max_element(arr, arr + n);
	double max = *max_ptr;
	//cout << max << " ";

	for (int i = 0; i < n; i++) {
		sum = sum + arr[i] / max * 100;
	}


	cout << sum / n;

	return 0;
}