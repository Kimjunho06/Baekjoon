#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int n;
	int x, y;
	vector<pair<int, int>> v;
	vector<pair<int, int>> answer;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> x >> y;

		v.push_back({ y, x });
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < n; i++) {
		answer.push_back({ v[i].second, v[i].first });
	}

	for (auto a : answer) {
		cout << a.first << " " << a.second << "\n";
	}

}