#include <iostream>
#include <queue>

using namespace std;

int main() {
	int n, input;

	cin >> n;

	for (int i = 0; i < n; i++) {
		priority_queue<int> pq;
		for (int j = 0; j < 10; j++) {
			cin >> input;

			pq.push(input);
		}
		pq.pop();
		pq.pop();

		cout << pq.top() << "\n";
	}
}