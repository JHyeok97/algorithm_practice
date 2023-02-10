#include <bits/stdc++.h>
using namespace std;

int a[1000000];

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	for (int i = 3; i < 1000000; i += 2) {
		a[i] = i;
	}
	for (int i = 3; i < 1000000; i += 2) {
		if (a[i] == 0) continue;

		for (int j = 2 * i; j < 1000000; j += i) {
			a[j] = 0;
		}
	}
	while (1) {
		int n,m,l;
		cin >> n;
		if (n == 0) break;

		for (int i = 3; i < n; i+=2) {
			if (a[n - i] == n - a[i]) {
				cout << n << " = " << a[i] << " + " << n - a[i] << "\n";
				break;
			}
		}
	}
}