#include <iostream>
#include <vector>

using namespace std;

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};
void DFS(int x, int y, vector<string>& board, vector<vector<bool>>& visited) {
	visited[y][x] = true;

	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];

		if (nx < 0 || nx >= board.size()) continue;
		if (ny < 0 || ny >= board.size()) continue;

		if (!visited[ny][nx] && board[y][x] == board[ny][nx]) {
			DFS(nx, ny, board, visited);
		}
	}
}

void RGDFS(int x, int y, vector<string>& board, vector<vector<bool>>& visited) {
	visited[y][x] = true;

	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];

		if (nx < 0 || nx >= board.size()) continue;
		if (ny < 0 || ny >= board.size()) continue;
		
		if (board[y][x] == 'B') {
			if (!visited[ny][nx] && board[y][x] == board[ny][nx]) {
				RGDFS(nx, ny, board, visited);
			}
		}
		else {
			if (!visited[ny][nx] && (board[ny][nx] == 'R' || board[ny][nx] == 'G')) {
				RGDFS(nx, ny, board, visited);
			}
		}
	}
}

int main() {
	vector<string> board;
	vector<vector<bool>> visited;
	int n, cnt = 0;
	string line;

	cin >> n;
	visited.resize(n);
	for (int i = 0; i < n; i++) visited[i].resize(n);

	for (int i = 0; i < n; i++) {
		cin >> line;

		board.push_back(line);
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (!visited[i][j]) {
				cnt++;
				DFS(j, i, board, visited);
			}
		}
	}

	cout << cnt;

	cnt = 0;
	visited.clear();
	visited.resize(n);
	for (int i = 0; i < n; i++) visited[i].resize(n);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (!visited[i][j]) {
				cnt++;
				RGDFS(j, i, board, visited);
			}
		}
	}

	cout << " " << cnt;
}