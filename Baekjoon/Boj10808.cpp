#include <iostream>

using namespace std;

int main() {
	string str;
	int arr[26];

	cin >> str;

	for (int i = 0; i < 26; i++) arr[i] = 0;

	for (int i = 0; i < str.size(); i++) {
		arr[str[i] - 'a']++;
	}

	for (auto a : arr) {
		cout << a << " ";
	}
}