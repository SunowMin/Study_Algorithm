#include <stdio.h>

int main() {
	int i, n, v;
	int cnt = 0;
	int arr[100] = { 0 };

	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	scanf("%d", &v);

	for (i = 0; i < n; i++) {
		if (arr[i] == v) cnt++;
	}

	printf("%d", cnt);

	return 0;
}