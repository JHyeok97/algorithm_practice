#include <bits/stdc++.h>
using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	int count = 1;
	stack <int> s;
	vector<char> v;

	cin >> n;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;

		while (count <= x) { // 스택에 push 하면서 vector에 '+' 저장
			s.push(count);
			count++;
			v.push_back('+');
		}
		if (s.top() == x) { //x랑 top이 같으면 pop하고 vector에 '-' 저장
			s.pop();
			v.push_back('-');
		}
		else if (s.top() > x) { 
			cout << "NO";
			return 0; }
	}

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << "\n";
	}
}