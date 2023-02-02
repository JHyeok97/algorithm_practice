#include <bits/stdc++.h>
using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	string str;
	stack<double> s;
	double answer,temp;

	cin >> n >> str;

	vector<int> v(n);

	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}

	for (int i = 0; i < str.size(); i++) {
		if (str[i] == '+') {
			temp = s.top();
			s.pop();
			answer = s.top() + temp;
			s.pop();
			s.push(answer);
		}
		else if (str[i] == '-') {
			temp = s.top();
			s.pop();
			answer = s.top() - temp;
			s.pop();
			s.push(answer);
		}
		else if (str[i] == '*') {
			temp = s.top();
			s.pop();
			answer = s.top() * temp;
			s.pop();
			s.push(answer);
		}
		else if (str[i] == '/') {
			temp = s.top();
			s.pop();
			answer = s.top() / temp;
			s.pop();
			s.push(answer);
		}
		else {
			s.push(v[str[i] - 'A']);
		}
	}
	cout << fixed;
	cout.precision(2);
	cout << s.top();
}