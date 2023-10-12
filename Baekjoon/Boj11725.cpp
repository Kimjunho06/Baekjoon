#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> v;
vector<bool> visited;
vector<int> parent;

void DFS(int n) {
	visited[n] = true;
	for (int i = 0; i < v[n].size(); i++) {
		if (!visited[v[n][i]]) {
			parent[v[n][i]] = n;
			DFS(v[n][i]);
		}
	}
}

int main() {
	int n;
	int input1, input2;

	cin >> n;
	v.resize(n + 1);
	visited.resize(n + 1);
	parent.resize(n + 1);

	for (int i = 0; i < n - 1; i++) {
		cin >> input1 >> input2;

		v[input1].push_back(input2);
		v[input2].push_back(input1);
	}

	DFS(1);

	for (int i = 2; i < parent.size(); i++) {
		cout << parent[i] << "\n";
	}
}