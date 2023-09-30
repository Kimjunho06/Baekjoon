#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int input;
		cin >> input;
		for (int j = 0; j < input; j++) {
			cout << "=";
		}
		cout << "\n";
	}
}