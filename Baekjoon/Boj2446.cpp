#include <iostream>

using namespace std;

int main() {
	int n;
	int empty = 0;

	cin >> n;

	for (int i = 0; i < (n * 2) - 1; i++) {
		if (i == n) empty -= 2;
		for (int j = 0; j < empty; j++) {
			cout << " ";
		}
		if (i < n) {
			empty++;
			for (int j = n * 2; j > 1 + (2 * i); j--) {
				cout << "*";
			}
		}
		else {
			empty--;
			for (int j = 0; j < 1 + 2 * (i - n + 1); j++) {
				cout << "*";
			}
		}
		cout << endl;\
	}
}