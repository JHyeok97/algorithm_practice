#include <bits/stdc++.h>
using namespace std;

long long a[100000];
long long b[100000];

int GCD(long long a, long long b) {
	long long c;

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

	long long N, S;
	cin >> N >> S;

	for (long long i = 0; i < N; i++) {
		cin >> a[i];
		if (S >= a[i]) {
			b[i] = S - a[i];
		}
		else b[i] = a[i] - S;
	}

	long long D = b[0];

	for (long long i = 1; i < N; i++) {
		D = GCD(D, b[i]);
	}

	cout << D;
}