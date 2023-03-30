#include <stdio.h>

int arr[1000001];

int main() {
	int n, m;

	scanf("%d %d", &m, &n);

	for (int i = 2; i <= n; i++) {
		arr[i] = i;
	}

	for (int i = 2; i <= n; i++) {
		if (arr[i] == 0) continue;
		for (int j = 2 * i; j <= n; j += i) {
			arr[j] = 0;
		}
	}

	for (int i = m; i <= n; i++) {
		if (arr[i] != 0)	
			printf("%d\n", arr[i]);
	}
}