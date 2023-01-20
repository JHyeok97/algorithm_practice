#include <bits/stdc++.h>
using namespace std;

int main() {
	
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	string str;
	stack <char> s;

	cin >> n;
	cin.ignore();

	for (int i = 0; i < n; i++) {
		getline(cin, str);
		str += " ";

		for (int j = 0; j < str.size(); j++) {
			if (str[j] == ' ') {
				while (!s.empty())
				{
					cout << s.top();
					s.pop();
				}
				cout << " ";
			}
			else s.push(str[j]);
		}
	cout << "\n";
	}
}