#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int n, m;
	int arr[1001];
	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	sort(arr, arr+n);

	cout << arr[n - m];
}