#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, k, m;
	int cnt = 0;
	int answer = 0, maxCnt = 0;
	vector<pair<string, int>> v;
	string p, maxMon;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> p;
		cin >> k >> m;

		cnt = 0;
		while (m / k != 0)
		{
			m -= k;
			m += 2;
			cnt++;
		}

		v.push_back({ p, cnt });
	}

	for (auto a : v) {
		answer += a.second;
		if (a.second > maxCnt) {
			maxMon = a.first;
			maxCnt = a.second;
		}
	}

	cout << answer << "\n";
	cout << maxMon;
}