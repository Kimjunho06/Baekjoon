#include <iostream>
#include <vector>

using namespace std;

vector<vector<bool>> visited;
vector<vector<int>> v;

int dx[4] = { 1,-1,0,0 };
int dy[4] = { 0,0,1,-1 };
int cnt;

void DFS(int x, int y) {
	visited[y][x] = true;

	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];

		if (nx < 0 || nx >= v[0].size()) continue;
		if (ny < 0 || ny >= v.size()) continue;

		if (v[ny][nx] == 1 && !visited[ny][nx]) {
			DFS(nx, ny);
		}
	}
}

int main() {


	int T;
	int n, m, k;
	int input1, input2;

	cin >> T;
	while (T--)
	{
		cin >> m >> n >> k;

		cnt = 0;

		v.clear();
		visited.clear();

		v.resize(n);
		visited.resize(n);
		for (int i = 0; i < n; i++) visited[i].resize(m);
		for (int i = 0; i < n; i++) v[i].resize(m);

		for (int i = 0; i < k; i++) {
			cin >> input1 >> input2;

			v[input2][input1] = 1;
		}

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (v[i][j] == 1 && !visited[i][j]) {
					DFS(j, i);
					cnt++;
				}
			}
		}

		cout << cnt << "\n";
	}
}