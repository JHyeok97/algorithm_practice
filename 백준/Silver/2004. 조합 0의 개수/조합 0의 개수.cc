#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	ull n, m;
	ull cnt2 = 0, cnt5 = 0;
	cin >> n >> m;

	for (ull i = 2; i <= n; i *= 2) {
		cnt2 += n / i;
	}
	for (ull i = 2; i <= m; i *= 2) {
		cnt2 -= m / i;
	}
	for (ull i = 2; i <= n - m; i *= 2) {
		cnt2 -= (n - m) / i;
	}

	for (ull i = 5; i <= n; i *= 5) {
		cnt5 +=  n / i;
	}
	for (ull i = 5; i <= m; i *= 5) {
		cnt5 -= m / i;
	}
	for (ull i = 5; i <= n - m; i *= 5) {
		cnt5 -= (n - m) / i;
	}

	cout << min(cnt2, cnt5);
}