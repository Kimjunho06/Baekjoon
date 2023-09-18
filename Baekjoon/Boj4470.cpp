#include <iostream>
#include <string>

using namespace std;

int main() {
	int n;
	string str, answer = "";
	
	cin >> n;

	string* strarr = new string[n];

	cin.ignore();
	for (int i = 1; i <= n; i++) {
		getline(cin, str);

		strarr[i - 1] = str;
	}

	for (int i = 1; i <= n; i++) {
		cout << i << ". " << strarr[i - 1] << "\n";
	}

	delete[] strarr;
}