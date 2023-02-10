#include <bits/stdc++.h>
using namespace std;

int a[1000000];

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int M, N;
	cin >> M >> N;

	for (int i = 2; i <= N; i++) {
		a[i] = i;
	}
	for (int i = 2; i <= N; i++) {
		if (a[i] == 0) continue;

		for (int j = 2*i; j <= N; j += i) {
			a[j] = 0;
		}
	}

	for (int i = M; i <= N; i++) {
		if (a[i] != 0) cout << a[i] << "\n";
	}
}