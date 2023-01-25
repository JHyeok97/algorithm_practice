#include <bits/stdc++.h>
using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	string str;
	stack <char> s1;
	stack <char> s2;
	int n;

	cin >> str;
	

	for (int i = 0; i < str.size(); i++) {	//str을 스택 s1에 push
		s1.push(str[i]);
	}
	cin >> n;

	for (int i = 0; i < n; i++) {
		char c;
		cin >> c;
		if (c == 'L') {
			if (!s1.empty()) {
				s2.push(s1.top());
				s1.pop();
			}
		}
		else if (c == 'D') {
			if (!s2.empty()) {
				s1.push(s2.top());
				s2.pop();
			}
		}
		else if (c == 'B') {
			if(!s1.empty()) s1.pop();
		}
		else if (c == 'P') {
			char ch;
			cin >> ch;
			s1.push(ch);
		}
	}
	while (!s1.empty()) {
		s2.push(s1.top());
		s1.pop();
	}
	while (!s2.empty()) {
		cout << s2.top();
		s2.pop();
	}
}