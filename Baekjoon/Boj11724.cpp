#include <iostream>
#include <vector>
#include <stack>

using namespace std;

void DFS(vector<bool>& check, vector<vector<int>>& vec, int v) {
	if (check[v]) return;

	check[v] = true;

	for (auto i : vec[v]) {
		if (check[i] == false) {
			DFS(check, vec, i);
		}
	}
}

int main() {
	int n, m;
	int f, s;
	int cnt = 0;
	vector<bool> check;
	vector<vector<int>> v;

	cin >> n >> m;
	v.resize(n + 1);
	
	check.push_back(false);
	for (int i = 0; i < n; i++) {
		check.push_back(false);
	}

	for (int i = 0; i < m; i++) {
		cin >> f >> s;
		
		v[f].push_back(s);
		v[s].push_back(f);
	}

	for (int i = 1; i < n + 1; i++) {
		if (!check[i]) {
			cnt++;
			DFS(check, v, i);
		}
	}

	cout << cnt;
	
	// 이동할 때 본인과 넘어갈 친구를 트루로 바꾸고 트루면 다른 걸로 간다

	
}