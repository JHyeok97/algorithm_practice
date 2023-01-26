#include <bits/stdc++.h>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string s;
	int total = 0;
	int cnt = 0;

	
	stack<char> st;
	cin >> s;

	for (auto c : s) {
		if (c == '(') {
			st.push(c);
			cnt = 1;
		}
		else if (c == ')') {
			if (cnt == 1) {
				st.pop();
				total = total + st.size();
				cnt = 0;
			}
			else {
				st.pop();
				total += 1;
			}
		}
	}
	cout << total;
}