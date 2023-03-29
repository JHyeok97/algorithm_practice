#include <stdio.h>

int main() {
	int n, num;
	int cnt = 0;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &num);
		for (int j = 2; j <= num; j++) {
			if (j == num) cnt++;
			if (num % j == 0) break;
		}
	}
	printf("%d\n", cnt);
}