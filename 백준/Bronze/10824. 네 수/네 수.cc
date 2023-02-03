#include <bits/stdc++.h>
using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	string a,b,c,d;
	long long num1, num2;
	
	cin >> a >> b >> c >> d;
	a += b;
	c += d;
	num1 = stoll(a);
	num2 = stoll(c);
	cout << num1 + num2;
}