#include <iostream>
#include <map>

using namespace std;

int main() {
	int n, m;
	map<string, string> mp;

	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		string input, input1;
		cin >> input >> input1;

		mp.insert({ input, input1 });
	}

	for (int i = 0; i < m; i++) {
		string find;
		cin >> find;

		cout << mp.find(find)->second << "\n";
	}
}