#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<vector<int>> v;
queue<int> q;
bool visited[101];
int n, m;

int BFS(int a) {
	int cnt = 0;
	visited[a] = true;
	q.push(a);

	while (!q.empty())
	{
		int i = q.front();
		q.pop();
		for (int j = 1; j <= n; j++) {
			if (v[i][j] != 0 && !visited[j]) {
				q.push(j);
				visited[j] = true;
				cnt++;
			}
		}
	}

	return cnt;
}

int main() {
	int f, s;

	cin >> n >> m;

	v.resize(n + 1);
	for (int i = 0; i <= n; i++) v[i].resize(n + 1);
	for (int i = 0; i < 101; i++) visited[i] = false;

	for (int i = 0; i < m; i++) {
		cin >> f >> s;
		
		v[f][s] = 1;
		v[s][f] = 1;
	}

	cout << BFS(1);
}