#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int cmp(long long a, long long b) {
	return a > b;
}

int main() {
	vector<long long> v;
	int n, sum = 0;

	cin >> n;
	v.resize(n);

	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}

	sort(v.begin(), v.end(), cmp);

	for (int i = 0; i < n; i++) {
		if (i % 3 != 2) sum += v[i];
	}

	cout << sum;
}