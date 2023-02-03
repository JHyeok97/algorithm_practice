#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
	int c;

	while (b != 0) {
		c = a % b;
		a = b;
		b = c;
	}
	return a;
}

int lcm(int a, int b) {
	return a * b / gcd(a, b);
}

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int a1, b1;
	
	cin >> a1 >> b1;

	cout << gcd(a1, b1) << "\n" << lcm(a1,b1);
}