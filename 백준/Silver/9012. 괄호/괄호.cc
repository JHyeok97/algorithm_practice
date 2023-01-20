#include <bits/stdc++.h>
using namespace std;

int main() {
	
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	string str;
	

	cin >> n;

	for (int i = 0; i < n; i++) {
		stack <char> s;
		string answer = "YES";
		cin >> str;
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