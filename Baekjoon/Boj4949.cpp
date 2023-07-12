#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
	string str;
	bool ck = false;

	while (true)
	{
		getline(cin, str);
		stack<char> s;
		ck = false;

		if (str == ".") break;

		for (int i = 0; i < str.size(); i++) {
			switch (str[i])
			{
			case '(':
			case '[':
				s.push(str[i]);
				break;
			case ')':
				if (s.empty()) {
					ck = true;
				}
				else if (s.top() == '(') {
					s.pop();
				}
				else {
					ck = true;
				}
				break;
			case ']':
				if (s.empty()) {
					ck = true;
				}
				else if (s.top() == '[') {
					s.pop();
				}
				else {
					ck = true;
				}
				break;
			}
		}
		if (s.empty()) {
			if (ck) {
				cout << "no" << "\n";
			}
			else {
				cout << "yes" << "\n";
			}
		}
		else {
			cout << "no" << "\n";
		}

		while (!s.empty())
		{
			s.pop();
		}
	}
}