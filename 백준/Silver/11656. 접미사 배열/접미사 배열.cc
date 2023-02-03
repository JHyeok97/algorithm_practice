#include <bits/stdc++.h>
using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	string s;
	cin >> s;
	string str[1000];

	for (int i = 0; i < s.length(); i++) {
		str[i] = s.substr(i, s.length());
	}
	sort(str, str + s.length());
	for (int i = 0; i < s.length(); i++) {
		cout << str[i] << "\n";
	}
}