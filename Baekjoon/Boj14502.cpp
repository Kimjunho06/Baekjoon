#include <iostream>
#include <queue>
#include <vector>

using namespace std;


int n, m;
int arr[9][9];
int visited[9][9] = { false };
int dx[] = { 0,0,-1,1 };
int dy[] = { -1,1,0,0 };
int minVirus = 100000;

queue<pair<int, int>> virus;
vector<pair<int, int>> list;

int Bfs() {
	queue<pair<int, int>> q = virus;
	int count = 0;

	while (!q.empty()) {
		int x = q.front().first;
		int y = q.front().second;
		visited[x][y] = true;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (nx < 1 || nx > n || ny < 1 || ny > m || arr[nx][ny] != 0) continue;
			if (!visited[nx][ny]) {
				visited[nx][ny] = true;
				q.push(make_pair(nx, ny));
				count++;
			}
		}
	}
	return count;
}
int WorkVirus(pair<int, int> w1, pair<int, int> w2, pair<int, int> w3) {
	for (int i = 1; i <= 8; i++)
		for (int j = 1; j <= 8; j++) visited[i][j] = false;

	arr[w1.first][w1.second] = 1;
	arr[w2.first][w2.second] = 1;
	arr[w3.first][w3.second] = 1;

	minVirus = min(minVirus, Bfs());

	arr[w1.first][w1.second] = 0;
	arr[w2.first][w2.second] = 0;
	arr[w3.first][w3.second] = 0;

	return minVirus;
}
int main() {

	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	cin >> n >> m;

	int safety = 0;

	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++) {
			cin >> arr[i][j];
			if (arr[i][j] == 0) {
				list.push_back(make_pair(i, j));
				safety++;
			}
			else if (arr[i][j] == 2) virus.push(make_pair(i, j));
		}

	int answer = 0;
	for (int i = 0; i < list.size() - 2; i++)
		for (int j = i + 1; j < list.size() - 1; j++)
			for (int k = j + 1; k < list.size(); k++) {
				answer = WorkVirus(list[i], list[j], list[k]);
			}

	cout << safety - answer - 3;
}