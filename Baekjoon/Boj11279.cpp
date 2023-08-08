#include <iostream>
#include <queue>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int n, input;
	priority_queue<int, vector<int>, less<int>> pq;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> input;

		if (input == 0) {
			if (pq.empty()) {
				cout << 0 << "\n";
			}
			else {
				cout << pq.top() << "\n";
				pq.pop();
			}
		}
		else {
			pq.push(input);
		}
	}
}