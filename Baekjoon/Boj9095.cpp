#include <iostream>

using namespace std;

int arr[12];
int f(int n) {
	if (arr[n] != 0) {
		return arr[n];
	}

	arr[n] = f(n - 1) + f(n - 2) + f(n - 3);
	return arr[n];
}

int main() {
	int T, n;

	cin >> T;

	arr[1] = 1;
	arr[2] = 2;
	arr[3] = 4;

	for (int i = 0; i < T; i++) {
		cin >> n;
		cout << f(n) << "\n";
	}
}