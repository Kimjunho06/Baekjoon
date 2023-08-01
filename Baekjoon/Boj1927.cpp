#include<iostream>
#include<queue>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	priority_queue<int, vector<int>, greater<int>> pq;
	int n, input;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> input;

		if (input != 0) {
			pq.push(input);
		}
		else {
			if (pq.empty()) {
				cout << 0 << "\n";
			}
			else {
				cout << pq.top() << "\n";
				pq.pop();
			}
		}
	}
	
}