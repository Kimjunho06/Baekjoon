#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
	int n;
	int data, per = 0;
	float avg = 0, div;
	vector<int> v;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> data;

		v.push_back(data);
	}

	sort(v.begin(), v.end());

	per = round(n * 0.15f);

	for (int i = per; i < n - per; i++) {
		avg += v[i];
	}

	div = n - (per * 2);

	if (div == 0) {
		cout << 0;
	}
	else {
		cout << round(avg / div);
	}
}