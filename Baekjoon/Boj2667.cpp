#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> board;
vector<vector<bool>> visited;
vector<int> answer;
int Dcnt;
int dx[4] = { 1,-1,0,0 };
int dy[4] = { 0,0,1,-1 };

void DFS(int x, int y) {
	visited[y][x] = true;

	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];

		if (nx < 0 || nx >= board.size()) continue;
		if (ny < 0 || ny >= board.size()) continue;
		if (!visited[ny][nx] && board[ny][nx] == '1') {
			Dcnt++;
			DFS(nx, ny);
		}
	}
}

int main() {
	int n;
	int cnt = 0;
	string str;

	cin >> n;
	visited.resize(n);
	for (int i = 0; i < n; i++) visited[i].resize(n);

	for (int i = 0; i < n; i++) {
		cin >> str;

		board.push_back(str);
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (!visited[i][j] && board[i][j] == '1') {
				Dcnt = 1;
				cnt++;
				DFS(j, i);
				answer.push_back(Dcnt);
			}
		}
	}

	sort(answer.begin(), answer.end());

	cout << cnt << "\n";
	for (auto a : answer) {
		cout << a << "\n";
	}
}