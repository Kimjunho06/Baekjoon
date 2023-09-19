#include <iostream>

using namespace std;

int main() {
	string str, answer = "";
	int cnt = 0;

	cin >> str;

	for (int i = 0; i < str.size(); i++) {
		if (cnt % 10 == 0 && i != 0) {
			cout << answer;
			cnt = 0;
			answer = "";
			cout << "\n";
		}

		cnt++;
		answer += str[i];
	}
	if (cnt != 0)
		cout  << answer;
}