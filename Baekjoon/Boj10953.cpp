#include <iostream>

using namespace std;

int main() {
	int n;
	string str;

	cin >> n;
	
	for (int i = 0; i < n; i++) {
		cin >> str;

		cout << str[0] - '0' + str[2] - '0' << "\n";
	}
}