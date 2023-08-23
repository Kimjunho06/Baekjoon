#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, m;
	int x1, x2;
	int y1, y2;
	int cnt = 0;
	vector<vector<int>> v;
	
	cin >> n >> m;

	v.resize(101);
	for (int i = 0; i < 101; i++) {
		v[i].resize(101);
	}
	
	while (n--)
	{
		cin >> x1 >> y1 >> x2 >> y2;
		
		for (int i = y1; i <= y2; i++) {
			for (int j = x1; j <= x2; j++) {
				v[i][j]++;
			}
		}
	}

	for (int i = 1; i < v.size(); i++) {
		for (int j = 1; j < v[i].size(); j++) {
			if (v[i][j] > m) {
				cnt++;
			}
		}
	}

	cout << cnt;
}