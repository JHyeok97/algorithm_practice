#include <bits/stdc++.h>
using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	string str;

	cin >> str;

	for (char c = 'a'; c <= 'z'; c++) {
		int cnt = -1;
		for (int i = 0; i < str.length(); i++) {
			if (str[i] == c) {
				cnt = i;
				break;
			}
		}
		cout << cnt << " ";
	}
}