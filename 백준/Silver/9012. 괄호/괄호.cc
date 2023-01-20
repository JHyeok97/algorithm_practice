#include <bits/stdc++.h>
using namespace std;

int main() {
	
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	string str;
	stack <char> s;

	cin >> n;

	for (int i = 0; i < n; i++) {
		string answer = "YES";
		cin >> str;
		while (!s.empty()) s.pop();
		for (int j = 0; j < str.length(); j++) {
			if (str[j] == '(') {
				s.push(str[j]);
			}
			else if (!s.empty() && str[j] == ')') {
				s.pop();
			}
			else {
				answer = "NO";
				break;
			}
		}
		if (!s.empty()) answer = "NO";
		cout << answer << "\n";
	}
}