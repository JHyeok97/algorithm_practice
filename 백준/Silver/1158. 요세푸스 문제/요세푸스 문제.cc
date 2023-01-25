#include <bits/stdc++.h>
using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	queue<int> q;
	int n, k;
	int i = 1;

	cin >> n >> k;

	cout << "<";
	for (int k = 1; k <= n; k++) {
		q.push(k);
	}
	while (q.size()>1) {
		if (i % k == 0) {
			cout << q.front() << ", ";
			q.pop();
		}
		else {
			q.push(q.front());
			q.pop();
		}
		i++;
	}
	cout << q.front() <<">";
}