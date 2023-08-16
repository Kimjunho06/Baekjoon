#include <iostream>

using namespace std;

long long arr[102] = { 0, 1, 1, 1, 2, 2 };
long long f(long long n) {
	if (arr[n] != 0) {
		return arr[n];
	}

	arr[n] = f(n - 1) + f(n - 5);
	return arr[n];
}

int main() {
	long long T, n;

	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> n;
		cout << f(n) << "\n";
	}
}