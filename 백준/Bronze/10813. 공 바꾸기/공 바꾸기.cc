#include <iostream>
using namespace std;

int main()
{
	int n, m, arr[100] = {0, }, a, b, temp = 0;

	cin >> n >> m;  // 5개의 바구니, 4번 입력받기

	// 바구니에 순서대로 1 2 3 4 5가 담김
	for (int i = 0; i < n; i++) {
		arr[i] = i + 1;
	}

	// 4번 실행
	for (int i = 0; i < m; i++) {
		cin >> a >> b;
		temp = arr[a-1];
		arr[a-1] = arr[b-1];
		arr[b-1] = temp;
	}

	// 출력하기
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}

	return 0;
}