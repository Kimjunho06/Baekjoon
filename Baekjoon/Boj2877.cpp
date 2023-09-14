#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	long long a[32];
	for (int i = 0; i < 31; i++) {
		a[i] = (1 << i);
	}
	int k, d;
	cin >> k;
	for (int i = 1; i < 31; i++) {
		if (k > a[i])
			k -= a[i];
		else {
			d = i;
			break;
		}
	}
	k--, d--;
	for (int i = d; i >= 0; i--) {
		if (k & a[i]) cout << "7";
		else cout << "4";
	}

	return 0;
}