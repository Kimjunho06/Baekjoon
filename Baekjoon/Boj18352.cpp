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
		// ���� �湮�� ����, ��� ���� - ���� ���� �� �Ÿ�
		now = Q.front().first, dis = Q.front().second;
		Q.pop();

		if (dis == K) {
			Print.push(now);
			continue; // �Ÿ��� K�̻��� ���ô� Ž���� �ʿ䰡 �����Ƿ�
		}

		// ���� ���ÿ� ������ ���õ�
		for (int i : V[now]) {
			if (!visited[i]) {
				Q.push({ i,dis + 1 });
				// �湮 ǥ��
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
	if (Print.empty()) printf("-1"); // �Ÿ��� K�� ���ð� ���ٸ�
	while (!Print.empty()) {
		printf("%d\n", Print.top());
		Print.pop();
	}

	return 0;
}