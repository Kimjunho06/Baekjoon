#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int n, s, m;
	int result = -1;

	cin >> n >> s >> m;
	int* arr = new int[m + 1];

	// Init
	for (int i = 0; i <= m; i++)
		arr[i] = -1;
	arr[s] = 0;

	
	for (int i = 0; i < n; i++) {
		int input;
		vector<int> v;

		cin >> input;
	
		for (int j = 0; j <= m; j++) {
			if (arr[j] == i) {
				int addVol = j + input;
				int minVol = j - input;

				if (addVol <= m)
					v.push_back(addVol);
				if (minVol >= 0)
					v.push_back(minVol);
			}
		}

		for (int vol : v) {
			arr[vol] = i + 1;
		}
	}

	// OutPut
	for (int i = 0; i <= m; i++) {
		if (arr[i] == n) {
			if (i > result)
				result = i;
		}
	}
	cout << result;

	// Release
	delete[] arr;
}