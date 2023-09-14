#include <iostream>
#include <queue>

using namespace std;

int main() {
	int input;
	int sum = 0;
	priority_queue<int> pq;

	for (int i = 0; i < 5; i++) {
		cin >> input;

		sum += input;
		pq.push(input);
	}

	cout << sum / 5 << "\n";
	pq.pop();
	pq.pop();
	cout << pq.top();
}