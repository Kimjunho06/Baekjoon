//#include <iostream>
//#include <vector>
//#include <climits>
//
//using namespace std;
//
//int main() {
//	int n, m;
//	int a, b, c;
//	vector<vector<pair<int, int>>> v;
//	vector<vector<int>> answer;
//
//	cin >> n >> m;
//
//	v.resize(n + 1);
//	answer.resize(n + 1);
//
//	for (int i = 1; i <= n; i++) {
//		answer[i].resize(n + 1);
//	}
//
//	for (int i = 0; i < m; i++) {
//		cin >> a >> b >> c; // a: 시작노드, b: 도착노드, c:가중치
//
//		v[a].push_back({ b, c });
//	}
//
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= n; j++) {
//			if (i == j) {
//				answer[i][j] = 0;
//			}
//			else {
//				answer[i][j] = INT_MAX;
//			}
//		}
//	}
//
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= n; j++) {
//			if (answer[i][j] == INT_MAX) {
//				cout << 0 << " ";
//			}
//			else {
//				cout << answer[i][j] << " ";
//			}
//		}
//		cout << "\n";
//	}
//}