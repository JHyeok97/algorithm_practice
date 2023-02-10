#include <bits/stdc++.h>
using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int N;
	int cnt = 0;
	cin >> N;

	for (int i = 5; i <= N; i *= 5) {
		cnt += N / i;
	}
	cout << cnt;
}