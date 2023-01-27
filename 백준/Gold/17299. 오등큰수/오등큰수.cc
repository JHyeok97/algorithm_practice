#include <bits/stdc++.h>
using namespace std;
	
int A[1000001];
int cnt[1000001];
int NGF[1000001];

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	stack<int> s;


	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> A[i];
		cnt[A[i]]++;
	}
	for (int i = n - 1; i >= 0; i--) {
		while (!s.empty() &&  cnt[s.top()] <= cnt[A[i]]) {
			s.pop();
		}
		if (s.empty()) NGF[i] = -1;
		else NGF[i] = s.top();

		s.push(A[i]);
	}
	for (int i = 0; i < n; i++) {
		cout << NGF[i] << " ";
	}
	
}