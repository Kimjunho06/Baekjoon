#include <iostream>
#include <stack>

using namespace std;

int main() {
	int n, cnt = 0;
	string str;
	stack<char> s;

	cin >> n >> str;

	for (int i = 0; i < str.size(); i++) {
		if (str[i] > '0' && str[i] <= '9') cnt++;
		else {
			switch (str[i])
			{
			case 'L':
			case 'S':
				s.push(str[i]);
				break;
			case 'R':
				if (s.top() == 'L') {
					s.pop();
					cnt++;
				}
				else {
					s.push(str[i]);
				}
				break;
			case 'K':
				if (s.top() == 'S') {
					s.pop();
					cnt++;
				}
				else {
					s.push(str[i]);
				}
				break;
			}
		}
	}

	cout << cnt;
}