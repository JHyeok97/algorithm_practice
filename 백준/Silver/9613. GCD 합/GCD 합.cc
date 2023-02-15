#include <bits/stdc++.h>
using namespace std;

int a[100];

int GCD(int a, int b) {
	int c;

	while (b != 0){
		c = a % b;
		a = b;
		b = c;
	}
	return a;
}

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;

	for (int i = 0; i < t; i++) {
		int n;
		cin >> n;

		long long sum = 0;

		for (int j = 0; j < n; j++) {
			cin >> a[j];
		}
		for (int k = 0; k < n - 1; k++) {
			for (int l = k + 1; l < n; l++) {
				sum += GCD(a[k], a[l]);
			}
		}
		cout << sum << "\n";
	}
}