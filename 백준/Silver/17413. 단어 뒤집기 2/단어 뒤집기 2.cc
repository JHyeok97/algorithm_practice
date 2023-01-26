#include <bits/stdc++.h>
using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	string str;
	stack<char>s;

	getline(cin, str);	// 문장 str 입력받기

	for (int i = 0; i < str.size(); i++) {
		if (str[i] == '<') {
			while (!s.empty()) {	// '<'전에 있던 문장 뒤집어 출력
				cout << s.top();
				s.pop();
			}
			for (int j = i; j < str.size(); j++) {	// '<'이후 '>'까지 문장 출력
				if (str[j] == '>') {
					cout << str[j];
					i = j;	// i = j를 해주면서 '<', '>'사이의 문장 반복문은 건너뛰기
					break;
				}
				else cout << str[j];
			}
		}
		
		else {
			if (str[i] == ' ') {	// 공백이 있으면 뒤집어서 출력
				while (!s.empty()) {
					cout << s.top();
					s.pop();
				}
				cout << " ";
			}
			else {	// 문자를 스택 s 에 저장
				s.push(str[i]);
			}
		}
	}
	while (!s.empty()) {	// 마지막 단어 뒤집어 출력
		cout << s.top();
		s.pop();
	}

}