#include <iostream>
using namespace std;

int main()
{
	int n, m, arr[100] = {0, }, a, b, c;

	cin >> n >> m;  // 5개의 바구니, 4번 입력받기

	for (int i = 0; i < m; i++) {
		cin >> a >> b >> c;
		for (int j = a; j <= b; j++) {
			arr[j] = c;
		}
	}
	for (int i = 1; i <= n; i++) {
		cout << arr[i] << " ";
	}


	return 0;
}