#include <iostream>
#include <string>
#include <stack>
#include <vector>

using namespace std;

stack<char> st;
vector<string> result;
// 스택에 거꾸로 담긴 문자들을 문자열로 저장하는 것.
void StackString() {
	string str = "";
	while (!st.empty())
	{
		str += st.top();
		st.pop();
	}

	result.push_back(str);
}

int main() {
	string s;
	bool check = false;

	getline(cin, s);

	for (int i = 0; i < s.length(); i++) {
		check = false;
		if (s[i] == '<') {
			if (!st.empty())
				StackString();

			string str = "";
			for (int j = 0; j < s.length() - i; i++) {
				str += s[i + j];
				if (s[i + j] == '>') {
					result.push_back(str);
					check = true;
					break;
				}
			}
		}

		if (check)
			continue;

		if (s[i] == ' ') {
			StackString();
			result.push_back(" ");
			continue;
		}

		st.push(s[i]);
	}
	if (!st.empty())
		StackString();


	for (auto str : result) {
		cout << str;
	}
}
