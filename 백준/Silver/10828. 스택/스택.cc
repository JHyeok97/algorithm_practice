#include <bits/stdc++.h>
using namespace std;

int main(void) {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	string str;
	stack <int> s;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> str;
		if (str == "push") {
			int x;
			cin >> x;
			s.push(x);
		}
		else if (str == "pop") {
			if (s.empty()) {
				cout << - 1 << "\n";
			}
			else { 
				cout << s.top() << "\n";
				s.pop();
			}
		}
		else if (str == "size") {
			cout << s.size() << "\n";
		}
		else if (str == "empty") {
			cout << s.empty() << "\n";
		}
		else if (str == "top") {
			if (s.empty()) {
				cout << -1 << "\n";
			}
			else cout << s.top() << "\n";
		}
	}
}