//#include <iostream>
//
//using namespace std;
//
//int arr[1000001];
//int cnt;
//int find(int x) {
//	if (arr[x] == x)
//		return x;
//	return arr[x] = find(arr[x]);
//}
//
//void merge(int x, int y) {
//	x = find(x);
//	y = find(y);
//	if (x == y) return;
//	arr[y] = x;
//}
//
//bool IsUnion(int x, int y) {
//	x = find(x);
//	y = find(y);
//	if (x == y)
//		return true;
//	return false;
//}
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr); cout.tie(nullptr);
//
//	int T, n;
//	string f, s;
//
//	cin >> T;
//	
//	for (int i = 0; i < T; i++) {
//		cin >> n;
//		for (int j = 0; j < n; j++) {
//			cin >> f >> s;
//
//
//
//			cout << cnt << "\n";
//		}
//	}
//
//
//}