#include <iostream>

using namespace std;

int main() {
	int n, a, cnt = 0;
	cin >> n;

	for (int i = 0; i < 5; i++) {
		cin >> a;

		cnt = a % 10 == n ? cnt + 1 : cnt;
	}

	cout << cnt;
}