#include <iostream>

using namespace std;

int f(int n) {
	int sum = n;
	while (n > 0)
	{
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

int main() {
	int arr[10100];

	for (int i = 0; i < 10001; i++) {
		arr[i] = 0;
	}

	for (int i = 0; i < 10001; i++) {
		arr[f(i)]++;
	}

	for (int i = 0; i < 10001; i++) {
		if (arr[i] == 0) {
			cout << i << endl;
		}
	}
}