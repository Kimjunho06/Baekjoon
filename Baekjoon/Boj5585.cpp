#include <iostream>

using namespace std;

int main() {
	int n, N, cnt = 0;
	int arr[6] = { 1, 5, 10, 50, 100, 500 };

	cin >> n;

	N = 1000 - n;
	for (int i = 5; i >= 0; i--) {
		while (N >= arr[i])
		{
			N -= arr[i];
			cnt++;
		}
	}

	cout << cnt;
}