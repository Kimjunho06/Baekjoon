#include <iostream>
#include <stack>

using namespace std;

int main()
{
	string str;
	stack<char> s;
	int answer = 0;
	cin >> str;

	for (int i = 0; i < str.size(); i++) {
		if (str[i] == '(') {
			if (i + 1 <= str.size() && str[i + 1] == ')') {
				i++;
				if (s.empty()) continue;
				answer += s.size();
			}
			else {
				s.push(str[i]);
			}
		}
		else if (str[i] == ')') {
			answer++;
			
			if (s.empty()) continue;
			s.pop();
		}
	}

	cout << answer;
}