#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

vector<vector<int>> A;
vector<bool> visited;
bool arrive;

void DFS(int a) {
	cout << a << " ";
	visited[a] = true;

	for (int i : A[a]) {
		if (!visited[i]) {
			DFS(i);
		}
	}
}

void BFS(int a) {
	queue<int> q;
	q.push(a);
	visited[a] = true;

	while (!q.empty())
	{
		int cur = q.front();
		q.pop();
		cout << cur << " ";
		for (int i : A[cur]) {
			if (!visited[i]) {
				visited[i] = true;
				q.push(i);
			}
		}
	}
}

int main()
{
	int n, m, v;
	arrive = false;

	cin >> n >> m >> v;
	A.resize(n + 1);

	for (int i = 0; i < m; i++) {
		int fir, sec;
		cin >> fir >> sec;
		A[fir].push_back(sec);
		A[sec].push_back(fir);
	}

	for (int i = 1; i <= n; i++) {
		sort(A[i].begin(), A[i].end());
	}

	visited = vector<bool>(n + 1, false);
	DFS(v);
	cout << "\n";
	fill(visited.begin(), visited.end(), false);
	BFS(v);
	cout << "\n";
}