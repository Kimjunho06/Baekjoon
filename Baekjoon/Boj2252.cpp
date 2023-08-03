#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, m;
	int A, B;
	int arr[32002] = {};
	bool visited[32002] = {};
	vector<vector<int>> v;
	vector<int> answer;

	cin >> n >> m;

	v.resize(n + 1);

	for (int i = 0; i < m; i++) {
		cin >> A >> B;

		v[A].push_back(B);
		arr[B]++;
	}

	while (answer.size() != v.size() - 1)
	{
		for (int i = 1; i <= n; i++) {
			if (arr[i] == 0 && !visited[i]) {
				answer.push_back(i);
				visited[i] = true;
				for (int j = 0; j < v[i].size(); j++) {
					arr[v[i][j]]--;
				}
			}
		}
	}

	for (auto a : answer) {
		cout << a << " ";
	}
}