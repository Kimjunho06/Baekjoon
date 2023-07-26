#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, k;
	int cnt = 0;
	int input;
	vector<int> v;


	cin >> n >> k;

	for (int i = 0; i < n; i++) {
		cin >> input;

		v.push_back(input);
	}

	for (int i = v.size() - 1; i >= 0; i--) {
		while (true)
		{
			if (k >= v[i]) {
				k -= v[i];
				cnt++;
			}
			else {
				break;
			}
		}
	}

	cout << cnt;
}