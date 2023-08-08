//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr); cout.tie(nullptr);
//
//	int n, m, k, x;
//	int cnt = 0, beforeVal = 0;
//	int minValue, idx = 0;
//	vector<vector<int>> edge;
//	vector<int> D;
//	vector<int> answer;
//	vector<bool> visited;
//	
//	cin >> n >> m >> k >> x;
//	
//	edge.resize(m + 1);
//	visited.resize(n + 1);
//	D.resize(n + 1);
//
//	fill(D.begin(), D.end(), 2147483647);
//
//	for (int i = 0; i < m; i++) {
//		int A, B;
//		cin >> A >> B;
//		
//		edge[A].push_back(B);
//	}
//
//	D[x] = 0;
//
//	// 대충 지금 무지성 cnt 올려서 해결이 안됨
//	while (true)
//	{
//		if (cnt == k) break;
//		cnt++;
//
//		minValue = 2147483647;
//		idx = 0;
//		for (int i = 1; i <= n; i++) {
//			if (D[i] < minValue && !visited[i]) {
//				minValue = D[i];
//				idx = i;
//			}
//		}
//		
//		for (int i = 0; i < edge[idx].size(); i++) {
//			beforeVal = D[edge[idx][i]];
//			D[edge[idx][i]] = min(D[idx] + 1, D[edge[idx][i]]);
//			if (cnt == k && D[edge[idx][i]] < beforeVal) {
//				answer.push_back(edge[idx][i]);
//			}
//		}
//		visited[idx] = true;
//	}
//	
//	sort(answer.begin(), answer.end());
//
//	if (answer.empty()) {
//		cout << -1;
//	}
//	else {
//		for (auto a : answer) {
//			cout << a << "\n";
//		}
//	}
//}