#include <iostream>
#include <vector>
#include <map>

using namespace std;

int arr[200001];
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

bool IsUnion(int x, int y) {
	x = find(x);
	y = find(y);
	if (x == y)
		return true;
	return false;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int T, n;
	int idx;
	vector<int> v;
	map<string, int> mp;
	string str, str2;

	v.resize(200002);

	cin >> T;

	while (T--)
	{
		cin >> n;

		mp.clear();
		idx = 0;
		for (int i = 0; i < 200001; i++) {
			arr[i] = i;
			v[i] = 1;
		}

		for (int i = 0; i < n; i++) {
			cin >> str >> str2;

			int a, b;
			if (mp.find(str) == mp.end()) {
				mp.insert({ str, idx });
				idx++;
			}
			if (mp.find(str2) == mp.end()) {
				mp.insert({ str2, idx });
				idx++;
			}
			a = find(mp.find(str)->second);
			b = find(mp.find(str2)->second);

			if (a != b)
			{
				merge(mp.find(str)->second, mp.find(str2)->second);
				v[a] += v[b];
			}

			cout << v[a] << "\n";
		}
	}
}