#include <iostream>

using namespace std;

int main() {
	int a, b, a1;

	cin >> a >> b;

	a = b - a;
	for (int i = 2; i <= b; i++) {
		if (a % i == 0 && b % i == 0) {
			a /= i;
			b /= i;
			i--;
		}
	}

	cout << a << " " << b;
}