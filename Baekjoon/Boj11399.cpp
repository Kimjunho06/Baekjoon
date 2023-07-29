#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	int n, input;
	int sec = 0;
	vector<int> v;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> input;
	
		v.push_back(input);
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < v.size(); i++) {
		sec += v[i] * (n - i);
	}

	cout << sec;
}