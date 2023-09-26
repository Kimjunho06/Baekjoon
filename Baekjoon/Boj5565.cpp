#include <iostream>

using namespace std;

int main() {
	int sum = 0, n, m;
	cin >> n;

	for (int i = 0; i < 9; i++) {
		cin >> m;
	
		sum += m;
	}

	cout << n - sum;

}