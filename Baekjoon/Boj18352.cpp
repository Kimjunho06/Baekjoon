#include <stdio.h>
#include <vector>
#include <queue>
using namespace std;

vector <int> V[300001];
priority_queue <int, vector<int>, greater<int>> Print;

void BFS(int start, int K) {
	queue <pair<int, int>> Q;
	bool visited[300001] = { 0, };
	int now, dis;

	Q.push({ start,0 });
	visited[start] = true;

	while (!Q.empty()) {
		// 현재 방문한 도시, 출발 도시 - 현재 도시 간 거리
		now = Q.front().first, dis = Q.front().second;
		Q.pop();

		if (dis == K) {
			Print.push(now);
			continue; // 거리가 K이상인 도시는 탐색할 필요가 없으므로
		}

		// 현재 도시와 인접한 도시들
		for (int i : V[now]) {
			if (!visited[i]) {
				Q.push({ i,dis + 1 });
				// 방문 표시
				visited[i] = true;
			}
		}
	}
}

int main() {
	int N, M, K, X, A, B;

	// input
	scanf("%d %d %d %d", &N, &M, &K, &X);
	for (int i = 0; i < M; i++) {
		scanf("%d %d", &A, &B);
		V[A].push_back(B);
	}

	// Find
	BFS(X, K);

	// print
	if (Print.empty()) printf("-1"); // 거리가 K인 도시가 없다면
	while (!Print.empty()) {
		printf("%d\n", Print.top());
		Print.pop();
	}

	return 0;
}