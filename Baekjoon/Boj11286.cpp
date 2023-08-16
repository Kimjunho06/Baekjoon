#include <iostream>
#include <queue>
#include <cmath>

using namespace std;

struct cmp {
	bool operator()(int a, int b) {
		if (abs(a) == abs(b)) {
			return a > b;
		}
		return abs(a) > abs(b);
	}
};

int main() {
	int n, input;
	priority_queue<int, vector<int>, cmp> pq;

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