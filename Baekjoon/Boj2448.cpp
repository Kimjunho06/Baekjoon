#include <iostream>

using namespace std;

int main() {
	int n;

	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			cout << " ";
		}

		if (i % 3 == 0) {
			cout << "*";
		}
		else if (i % 3 == 1) {
			cout << "* *";
		}
		else {
			cout << "*****";
		}

		if ((i / 3) % 2 == 1) {
			for (int j = 0; j < 5 - ((i % 3) * 2); j++) {
				cout << " ";
			}
			if (i % 3 == 0) {
				cout << "*";
			}
			else if (i % 3 == 1) {
				cout << "* *";
			}
			else {
				cout << "*****";
			}
		}

		if ((i / (3 * 2)) % 2 == 1) {
			for (int j = 0; j < 11 - ((i % (3 * 2)) * 2); j++) {
				cout << " ";
			}
			if (i % 3 == 0) {
				cout << "*";
			}
			else if (i % 3 == 1) {
				cout << "* *";
			}
			else {
				cout << "*****";
			}

			if ((i / 3) % 2 == 1) {
				for (int j = 0; j < 5 - ((i % 3) * 2); j++) {
					cout << " ";
				}
				if (i % 3 == 0) {
					cout << "*";
				}
				else if (i % 3 == 1) {
					cout << "* *";
				}
				else {
					cout << "*****";
				}
			}

		}

		cout << "\n";
	}
}