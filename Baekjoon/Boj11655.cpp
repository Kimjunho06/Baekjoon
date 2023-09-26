#include <iostream>
#include <string>

using namespace std;

int main() {
	string str;
	
	getline(cin, str);

	for (int i = 0; i < str.size(); i++) {
		if (str[i] >= 65 && str[i] <= 90) {
			if (str[i] + 13 > 90) {
				str[i] -= 26;
			}
			str[i] += 13;
		}
		else if (str[i] >= 97 && str[i] <= 122) {
			if (str[i] + 13 > 122) {
				str[i] -= 26;
			}
			str[i] += 13;
		}
	}
	cout << str;
}