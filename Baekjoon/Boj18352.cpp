#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int n, m, k, x; // 도시의 개수 N, 도로의 개수 M, 거리 정보 K, 출발 도시의 번호 X

void BFS(int n, vector<int>& visited, vector<vector<int>>& v) {
	queue<int> q;
	visited[n] = 0;
	q.push(n);

	while (!q.empty())
	{
		int i = q.front();
		q.pop();
		
		for (int j = 0; j < v[i].size(); j++) {
			if (visited[v[i][j]] < 0) {
				q.push(v[i][j]);
				visited[v[i][j]] = visited[i] + 1;
			}
		}
	}
}

int main() {
	int fs, se;
	vector<int> visited;
	vector<vector<int>> v;	
	priority_queue<int, vector<int>, greater<int>> pq;

	cin >> n >> m >> k >> x;

	visited.resize(n + 1, -1);
	v.resize(n + 1);

	for (int i = 0; i < m; i++) {
		cin >> fs >> se;
		
		v[fs].push_back(se);
	}

	BFS(x, visited, v);

	for (int i = 1; i < visited.size(); i++) {
		if (visited[i] == k) {
			pq.push(i);
		}
	}

	if (pq.empty()) {
		cout << -1;
	}
	else {
		while (!pq.empty())
		{
			cout << pq.top() << "\n";
			pq.pop();
		}
	}
}