#include <iostream>

using namespace std;

int main() {
	string str;
	int answer = 0;

	cin >> str;
	
	if (str.size() == 2) {
		answer = (str[0] - '0') + (str[1] - '0');
	}
	else if (str.size() == 3) {
		if (str[2] == '0') {
			answer = 10 + (str[0] - '0');
		}
		else {
			answer = 10 + (str[2] - '0');
		}
	}
	else if (str.size() == 4) answer = 20;

	cout << answer;
}