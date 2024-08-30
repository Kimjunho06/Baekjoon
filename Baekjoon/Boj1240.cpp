#include <iostream>
#include <vector>

using namespace std;

vector<vector<pair<int, int>>> node;
vector<bool> visited;
vector<int> result;

void CalcDist(int st, int ed, int dist) {
	if (st == ed) {
		result.push_back(dist);
		return;
	}

	visited[st] = true;

	for (int i = 0; i < node[st].size(); i++)
	{
		int next = node[st][i].first;
		if (!visited[next]) {
			CalcDist(next, ed, dist + node[st][i].second);
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int n, m;
	int node1, node2, dist;
	int sNode, eNode;

	cin >> n >> m;
	node.resize(n + 1);

	for (int i = 0; i < n - 1; i++) {
		cin >> node1 >> node2 >> dist;

		node[node1].push_back({ node2, dist });
		node[node2].push_back({ node1, dist });
	}

	for (int i = 0; i < m; i++) {
		cin >> sNode >> eNode;

		visited.clear();
		visited.resize(n + 1);

		CalcDist(sNode, eNode, 0);
	}

	for (auto dist : result) {
		cout << dist << "\n";
	}
}