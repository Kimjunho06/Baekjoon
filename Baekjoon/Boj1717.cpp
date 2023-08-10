#include <iostream>

using namespace std;

int arr[1000001];
int find(int x) {
	if (arr[x] == x)
		return x;
	return arr[x] = find(arr[x]);
}

void merge(int x, int y) {
	x = find(x);
	y = find(y);
	if (x == y) return;
	arr[y] = x;
}

string IsUnion(int x, int y) {
	x = find(x);
	y = find(y);
	if (x == y)
		return "YES";
	return "NO";
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int n, m;
	int c, a, b;
	cin >> n >> m;

	for (int i = 1; i <= n; i++) {
		arr[i] = i;
	}

	for (int i = 0; i < m; i++) {
		cin >> c >> a >> b;

		if (c == 0) {
			merge(a, b);
		}
		else if (c == 1) {
			cout << IsUnion(a, b) << "\n";
		}
	}


}