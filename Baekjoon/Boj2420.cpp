#include <iostream>

using namespace std;

int main() {
	long long n, m;
	cin >> n >> m;

	if (n > m) {
		int tmp = m;
		m = n;
		n = tmp;
	}

	cout << m - n;
}