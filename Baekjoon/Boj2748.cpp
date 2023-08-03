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
	int n;
	cin >> n;

	for (int i = 0; i < 91; i++) {
		arr[i] = -1;
	}

	arr[1] = 1;
	arr[2] = 1;

	cout << fib(n);
}