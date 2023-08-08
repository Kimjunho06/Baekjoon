#include <iostream>
#include <vector>
#include <tuple> // 2tuple => pair


using namespace std;
typedef tuple<int, int, int> edge;

int main() {
	int n, m; // n 노드의 수, m 간선의 수
	int f, s, t; // 시작점, 끝점, 가중치
	bool minus = false; // 음수 사이클 확인
	vector<long> dis; // 정답 벡터
	vector<edge> edges; // 간선 벡터

	cin >> n >> m;
	dis.resize(n + 1); // 0번 안씀
	fill(dis.begin(), dis.end(), 2147483647); // 무한으로 설정해주는 과정 long 최대값

	// 간선 값 채우기
	for (int i = 0; i < m; i++) {
		cin >> f >> s >> t;

		edges.push_back({ f, s, t });
	}

	// 시작 노드 설정
	dis[1] = 0; 

	for (int i = 0; i < n - 1; i++) { // n - 1번 반복
		for (int j = 0; j < m; j++) { // 모든 간선을 탐색함
			edge medge = edges[j];
			f = get<0>(medge); // tuple의 원소에 접근하게 해주는 것
			s = get<1>(medge);
			t = get<2>(medge);

			if (dis[f] != 2147483647 && dis[s] > dis[f] + t) { // 조건에 맞다면 갱신
				dis[s] = dis[f] + t; 
			}
		}
	}

	// 음수 사이클 확인
	for (int j = 0; j < m; j++) {
		edge medge = edges[j];
		f = get<0>(medge);
		s = get<1>(medge);
		t = get<2>(medge);

		if (dis[f] != 2147483647 && dis[s] > dis[f] + t) {
			minus = true;
		}
	}

	if (minus) {
		// 음수 사이클이 돌아 무한히 오래전으로 갈 수 있기에
		cout << -1 << "\n";
	}
	else {
		for (int i = 2; i <= n; i++) {
			if (dis[i] == 2147483647) // 경로가 없어서 갱신이 한 번도 안된 상태 (= 길이 없는 상태)
				cout << -1 << "\n";
			else
				cout << dis[i] << "\n"; // 정답 벡터가 n + 1개였으니 n - 1 개의 줄에 걸쳐 출력하기 위해 2번부터 시작
		}
	}
}