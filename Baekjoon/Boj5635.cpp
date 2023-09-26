#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	int n;
	int dd, mm, yy;
	string name;
	vector<pair<int, string>> v;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> name >> dd >> mm >> yy;
		int day = yy * 1000 + mm * 10 + dd;

		v.push_back({ day, name });
	}

	sort(v.begin(), v.end());

	cout << v[n - 1].second << "\n";
	cout << v[0].second;

}