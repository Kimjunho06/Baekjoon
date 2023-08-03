#include <iostream>

using namespace std;

long long arr[91] = { };
long long fib(int n) {
	if (arr[n] != -1) {
		return arr[n];
	}

	arr[n] = fib(n - 1) + fib(n - 2);
	return arr[n];
}

int main() {
	int n, T;
	cin >> T;


	for (int i = 0; i < T; i++) {
		for (int j = 0; j < 41; j++) arr[j] = -1;
		
		cin >> n;
		arr[1] = 1;
		arr[2] = 1;

		if (n != 0) {
			cout << fib(n - 1) << " " << fib(n) << "\n";
		}
		else {
			cout << 1 << " " << 0 << "\n";
		}
	}
}