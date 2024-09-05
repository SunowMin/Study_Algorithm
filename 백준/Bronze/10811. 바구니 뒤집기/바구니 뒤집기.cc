#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n, m, i, j;
	int arr[101];

	// n개의 바구니 존재하고, m번 바꿈
	cin >> n >> m;
	
	for (int i = 0; i < n; i++) {
		arr[i] = i + 1;
	}

	for (int k = 0; k < m; k++) {
		cin >> i >> j;
		for (; i < j; i++, j--) {
			int temp = arr[i - 1];
			arr[i - 1] = arr[j - 1];
			arr[j - 1] = temp;
		}
	}

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}


	return 0;
}